#include <stdio.h>
#include <string.h>
struct Student {
	char ime[15];
	char prezime[20];
	int broj_bodova1;
	int broj_bodova2;
};
struct binarniStudent {
	char prezime[20];
	char ime[15];
	int ukupno;
};
void unesi(char *niz,int duzina)
{
	char znak=getchar();
	int i=0;
	if(znak=='\n') znak=getchar();
	while (i<duzina-1 && znak!='\n') {
		*niz=znak;
		niz++;
		znak=getchar();
		i++;
	}
	*niz='\0';


}
int unesiStudenta(struct Student *tmpS)
{
	struct Student student;
	FILE *unos = fopen("ispit.txt","a");
	if(!unos) return 0;
	printf("Unesite ime: ");
	unesi(student.ime,15);
	printf("Unesite prezime: ");
	unesi(student.prezime,20);
	printf("Unesite broj bodova na I parcijalnom: ");
	scanf("%d",&student.broj_bodova1);
	printf("Unesite broj bodova na II parcijalnom: ");
	scanf("%d",&student.broj_bodova2);
	if(student.broj_bodova1<0 && student.broj_bodova2<0) return 0;
	fprintf(unos,"%-20s%-15s%2d %2d\n",student.prezime,student.ime,student.broj_bodova1,student.broj_bodova2);
	fclose(unos);
	*tmpS=student;
	return 1;
}

int ispisiStudente()
{
	FILE *unos=fopen("ispit.txt","r");
	if(!unos) return 0;
	struct Student tmp;
	int i=0;
	while(fscanf(unos,"%20s%15s%2d %2d",tmp.prezime,tmp.ime,&tmp.broj_bodova1,&tmp.broj_bodova2)==4) {
		printf("\n%d. %s %s - %d, %d",i+1,tmp.prezime,tmp.ime,tmp.broj_bodova1,tmp.broj_bodova2);
		i++;
	}
	fclose(unos);
}
int sortiraj(struct Student *niz,int vel)
{
	int i,j;
	struct Student tmp;
	for(i=0; i<vel; i++) {
		for(j=i+1; j<vel; j++) {
			if((niz[i].broj_bodova1+niz[i].broj_bodova2)<(niz[j].broj_bodova1+niz[j].broj_bodova2)) {
				tmp=niz[i];
				niz[i]=niz[j];
				niz[j]=tmp;
			}
		}
	}

}

int upisiUsmeni(struct Student *studenti,int vel)
{
	FILE *izlaz = fopen("usmeni.dat","wb");
	if(!izlaz) return 0;



	struct binarniStudent tmpBin;
	int i=0;
	for (i=0; i<vel; i++) {
		if(studenti[i].broj_bodova1>=10 && studenti[i].broj_bodova2>=10) {
			strcpy(tmpBin.ime,studenti[i].ime);
			strcpy(tmpBin.prezime,studenti[i].prezime);
			tmpBin.ukupno=studenti[i].broj_bodova1+studenti[i].broj_bodova2;
			fwrite(&tmpBin,sizeof(tmpBin),1,izlaz);
		}
	}
	fclose(izlaz);
	printf("Izlazna datoteka usmeni.dat je kreirana\n");
	return 1;
}


int main()
{
	int unos;
	struct Student niz[1000];
	remove("ispit.txt");
	remove("usmeni.dat");
	int vel=0;
	do {
		printf("Unesite 1 za unos, 2 za ispis, 3 za usmeni, 0 za izlaz: ");
		scanf("%d",&unos);
		switch(unos) {
		case 1:
			while(1) {
				int provjera;
				provjera=unesiStudenta(niz+vel);
				if(provjera) break;
			}
			vel++;
			break;
		case 2:
			ispisiStudente();
			printf("\n");
			break;
		case 3:
			sortiraj(niz,vel);
			upisiUsmeni(niz,vel);
			break;
		case 0:
			break;

		}
	} while(unos!=0);
	return 0;
}
