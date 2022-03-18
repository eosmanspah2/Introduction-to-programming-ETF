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
char* kapitaliziraj(char* s){
	char* p=s;
	int provjera=1;
	while(*p != '\0'){
		if((p==s) && (*p>='a' && *p<='z')){
			*p-=32;
		}
		if(*p==' '){
			p++;
			if(*p>='a' && *p<='z')	{
				*p-=32;
			}
		}
		p++;
	}
	return s;
}
int main() {
	char recenica[80];
	printf("Unesite neki tekst: ");
	unesi(recenica,80);
	printf("%s", kapitaliziraj(recenica));
	return 0;
}
