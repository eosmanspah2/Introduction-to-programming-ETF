#include <stdio.h>
void unesi(char niz[], int velicina){
	char znak=getchar();
	if(znak=='\n') znak=getchar();
	int i=0;
	while(i<velicina-1 && znak!='\n'){
		niz[i]=znak;
		i++;
		znak=getchar();
	}
	niz[i]='\0';
}
int trazenje anagrama(char* prvi, char *drugi){
	int brojaci_1[26]={0}, brojaci_2[26]={0};
	int i=0;
	/*prebrojavanje stringa*/
	while(*prvi!='\0'){
		brojaci_1[*prvi-'a']++;
		i++;
		prvi++;
	}
	while(*drugi!='\0'){
		brojaci_2[*drugi-'a']++;
		i++;
		drugi++;
	}
	/*Upoređivanje stringova, slovo po slovo*/
	for(i=0;i<26;i++){
		if(brojaci_1[i]!=brojaci_2)
			return 0;
	}
	return 1;
}
int duzina(char*s){
	char* p=s;
	while(*s++);
	return s-p;
}
void rastavljanje_stringa(char *s){
	char matrica[100][100];
	int brojac_1=0, brojac_2=0,i;
	for(i=0; i<duzina(s); i++){
		if(*s==' ' || *s=='\0'){
			matrica[brojac_1][brojac_2]='\0';
			brojac_1++;
			brojac_2=0;
		}
		else if(*s>='A' || *s<='Z'){
		matrica[brojac_1][brojac_2]=*s;
		brojac++;
		
		}
		s++
		}
}





int main() {
	printf("Zadaća 4, Zadatak 2");
	return 0;
}
