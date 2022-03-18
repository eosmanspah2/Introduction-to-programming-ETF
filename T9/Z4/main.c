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
char max_slovo(const char*s){
	int brojaci[26]={0};
	int max=0,i=0;
	char pomocna;
	while(*s!='\0'){
		if(*s>='A' && *s<='Z')
			brojaci[*s-'A']++;
		if(*s>='a' && *s<='z')
			brojaci[*s-'a']++;
		s++;
	}
	for(i=0;i<26;i++){
		if(brojaci[i]>brojaci[max])
			max=i;
	}
	pomocna='A'+max;
	return pomocna;
}
int main() {
	char niz[80];
	printf("Unesite tekst: \n");
	unesi(niz,80);
	printf("Slovo koje se pojavljuje najvise puta je %c", max_slovo(niz));
	return 0;
}
