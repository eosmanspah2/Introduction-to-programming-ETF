#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	int index,predmet,ocjena;
};

struct Predmet{
	int redni_broj;
	char ime[50];
};
void unesi(char niz[], int velicina){
	char znak = getchar();
	if(znak=='\n')
	znak=getchar();
	int i=0;
	while(i<velicina-1 && znak!='\n'){
		niz[i]=znak;
		i++;
		znak=getchar();
	}
	niz[i]='\0';
}
int main(){
	FILE *ulaz;
	ulaz=fopen("ispiti.txt", "r");
	if(ulaz==NULL){
		printf("Greska prilikom otvaranja datoteke ispiti.txt! \n");
		return 1;
	}
	int i=0;
	struct Student osobe[100];
	while(fscanf(ulaz,"%d %d %d",&osobe[i].index, &osobe[i].predmet, &osobe[i].ocjena)!=EOF && i<100){
		i++;
	}
	i--;
	fclose(ulaz);
	ulaz=fopen("predmeti.txt", "r");
	if(ulaz==NULL){
		printf("Greska prilikom otvaranja datoteke predmeti.txt!\n");
		return 1;
	}
	int j=0;
	struct Predmet imena[6];
	do{
		fscanf(ulaz,"%d ", &imena[j].redni_broj);
		fgets(imena[j].ime,50,ulaz);
		imena[j].ime[strlen(imena[j].ime)-1]='\0';
		j++;
	}while(j<6);
	j--;
	fclose(ulaz);
	char ime_predmeta[50];
	int podudarnost=0;
	int broj_predmeta;
	int k;
	do{
		printf("Unesite predmet: ");
		unesi(ime_predmeta,50);
		for(k=0;k<j;k++){
			if(strcmp(ime_predmeta, imena[k].ime)==0){
				podudarnost=1;
				broj_predmeta=imena[k].redni_broj;
			}
		}
		if(podudarnost==0)
			printf("Nepostojeci predmet!\n");
		
	}while(podudarnost==0);
	j=0;
	float suma_ocjena=0;
	int broj_prolaza=0;
	int broj_izlazaka=0;
	do{
		if(broj_predmeta==osobe[j].predmet){
			if(osobe[j].ocjena>5)
				broj_prolaza++;
			suma_ocjena+=osobe[j].ocjena;
			broj_izlazaka++;
		}
	}while(j++<i);
		int prolaznost=broj_prolaza*100/broj_izlazaka;
	float prosjecna_ocjena=suma_ocjena/broj_izlazaka;
	printf("Prosjecna ocjena: %.2f\nProlaznost: %d%%",prosjecna_ocjena,prolaznost);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
