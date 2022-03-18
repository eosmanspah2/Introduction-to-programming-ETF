#include <stdio.h>
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
struct Osoba{
    char ime[15];
    char prezime[20];
    int telefon;
};

struct Osoba unos_osobe(){
    struct Osoba osoba;
    printf("Unesite ime: ");
    unesi(osoba.ime,15);
    printf("Unesite prezime: ");
    unesi(osoba.prezime,20);
    printf("Unesite broj telefona: ");
    scanf("%d", &osoba.telefon);
    return osoba;
}
void ispis_osobe(struct Osoba imenik[],int brojac_osoba){
	int i;
	for(i=0; i<brojac_osoba; i++){
		printf("\n%d. %s %s, Tel: %d\n", i+1, imenik[i].ime, imenik[i].prezime, imenik[i].telefon);
	}
}

int main() {
    struct Osoba imenik[100];
    int provjera, i=0;
    do{
    printf("Pritisnite 1 za unos, 2 za ispis, 0 za izlaz: ");
	scanf("%d", &provjera);
	if(provjera==1){
	    imenik[i]=unos_osobe();
	    i++;
	}
	else if(provjera==2){
		ispis_osobe(imenik,i);
	}
	}while(provjera!=0 && i<100);
	return 0;
}
