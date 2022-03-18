#include <stdio.h>
#include <stdlib.h>

struct Student {
	int index;
	int predmet;
	int ocjena;
};

int main()
{

	FILE* ulaz;
	ulaz = fopen("ispiti.txt", "r");
	if(ulaz==NULL) {
		printf("Pogreska kod otvaranja datoteke ispiti.txt!\n");
		return 1;
	}
	struct Student ucenik[100];
	int i=0;
	while(fscanf(ulaz,"%d %d %d",&ucenik[i].index, &ucenik[i].predmet, &ucenik[i].ocjena)!=EOF && i<100) {
		i++;
	}
	i--;
	fclose(ulaz);
	int broj_predmeta;
	printf("Unesite predmet: ");
	scanf("%d",&broj_predmeta);
	if(broj_predmeta<1 || broj_predmeta>5){
		printf("Zalimo, ali ne postoje podaci o predmetu sa brojem %d!", broj_predmeta);
		return 0;
	}
	int j=0,broj_prolaza=0,broj_izlazaka=0;
	float suma_ocjena=0;
	do {
		if(broj_predmeta==ucenik[j].predmet) {
			if(ucenik[j].ocjena>5)
				broj_prolaza++;
			suma_ocjena+=ucenik[j].ocjena;
			broj_izlazaka++;
		}
	} while(j++<i);
	int prolaznost=broj_prolaza*100/broj_izlazaka;
	float prosjecna_ocjena=suma_ocjena/broj_izlazaka;
	printf("Prosjecna ocjena: %.2f\nProlaznost: %d%%",prosjecna_ocjena,prolaznost);
	return 0;
}
