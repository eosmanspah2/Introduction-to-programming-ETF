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
int prva_rijec(char*s){
    int brojac=0;
    char *pomocna=s;
    while(*s!='\0'){
        if((*s==' ' && *(s+1)!=' ') || *(s+1)=='\0'){
            brojac++;
        }
        s++;
    }
    while(*pomocna!='\0'){
        if((*pomocna!=" " && *(pomocna+1)==" ") || *(pomocna+1)!='\0'){
            *(pomocna+1)='\0';
        }
        pomocna++;
    }
    return brojac;
}
int main() {
    char niz[80];
    printf("Unesite tekst: ");
    unesi(niz,80);
    printf("Broj rijeci u recenici je %d\n", prva_rijec(niz));
	return 0;
}
