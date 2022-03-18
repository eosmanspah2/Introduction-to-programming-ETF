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
char* izbaci_rijec(char*s, int n){
	int brojac_znakova=0,broj_rijeci=0,provjera=1;
	char* pomocna=s;
	char* pocetak_prve;
	char* pocetak_druge;
	if(n<1){
	return pomocna;
	}
	while(*s!='\0'){
		if( provjera==0 && !((*s>='A' && *s<='Z')||(*s>='a' && *s<='z')))
		{
			provjera=1;
			brojac_znakova=0;
		}
		if(provjera==1 && !((*s>='A' && *s<='Z')||(*s>='a' && *s<='z'))){
			brojac_znakova++;
			s++;
			continue;
		}
		if(provjera==1 && ((*s>='A' && *s<='Z')||(*s>='a' && *s<='z')))
		{
			broj_rijeci++;
			provjera=0;
			if(broj_rijeci==n) 
			pocetak_prve=s;
		}
		
			if(broj_rijeci==n+1){
				pocetak_druge=s-brojac_znakova;
				while(*pocetak_prve++=*pocetak_druge++);
				return pomocna;
			}
		
		s++;
	}
	if(broj_rijeci==n){
		*pocetak_prve='\0';
		return pomocna;
		
	}
	if(broj_rijeci<n)
	return pomocna;
}
int main() {
	char testni_string[] = "u zenicu auto-stopom kada podjem ja";
printf("%s", izbaci_rijec(testni_string, 4));

	return 0;
}
