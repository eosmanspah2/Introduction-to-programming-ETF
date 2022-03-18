#include <stdio.h>

char *tritacke (char *s){
	int brojac_slova=0;
	char* pocetak=s;
	int brojac=3;
	while(*s!='\0'){
		if((*s>='A' && *s<='Z') || (*s>='a' && *s<='z')){
			while(*s!=' ' && *s!='.' && *s!='\0'){
				brojac_slova++;
				s++;
			}
			if(brojac_slova>9){
				*(s+brojac)='.';
				brojac++;
				while(*(s+brojac)!='\0')
				{
					*(s+brojac)=*(s+brojac_slova);
					brojac++;
					brojac_slova++;
				}
				
			}
		}
		s++;
	}
	return pocetak;
}
int main() {
	printf("Tutorijal 10, Zadatak 6");
	return 0;
}
