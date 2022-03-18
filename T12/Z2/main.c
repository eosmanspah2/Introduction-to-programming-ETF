#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* ulaz;
	char znak, ime[20];
	int broj_redova=0, broj_rijeci=0, broj_znakova=0, razmak=1, broj_samoglasnika=0, broj_vslova=0, broj_cifara=0;
	scanf("%s", ime);
	ulaz=fopen(ime, "r");
	if(ulaz==NULL){
		printf("Pogreska kod otvaranja datoteke %s!\n\n", ime);
		return 1;
	}
	while((znak=fgetc(ulaz))!=EOF){
		if(znak=='\n')
		++broj_redova;
		else if(znak>='A' && znak<='Z')
			broj_vslova++;
		else if(znak>='0' && znak<='9')
			broj_cifara++;
		if(znak=='A' || znak=='a' || znak=='e' || znak=='E' || znak=='i' || znak=='I' || znak=='o' || znak=='O' || znak=='U' || znak=='u')
			broj_samoglasnika++;
		if(znak==' ' || znak=='\n' || znak=='\t')
			razmak=1;
	
		else{
			++broj_znakova;
			if(razmak==1) 
				++broj_rijeci;
			razmak=0;
		}
	}
	if(broj_znakova != 0) broj_redova++;
	printf("Broj redova: %d\nBroj rijeci: %d\nBroj znakova: %d\nBroj samoglasnika: %d\nBroj velikih slova: %d\nBroj cifara: %d\n", broj_redova, broj_rijeci, broj_znakova, broj_samoglasnika, broj_vslova, broj_cifara);
	fclose(ulaz);
	return 0;
}