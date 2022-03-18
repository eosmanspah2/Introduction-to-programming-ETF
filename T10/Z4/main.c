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
char* whitespace(char* s){
    char* pomocna1=s;
    char* pomocna2=s;
    char* pocetak=s;
    
    while(*s!='\0'){ //pretvaranje svako \t i \n u razmak//
        if(*s=='\t' || *s=='\n'){
            *s=' ';
        }    
        s++;
    }
   s=pocetak;
   while(*s!='\0'){
       if(*s==' '){
           if(s!=pocetak && *(s-1)!=' ' && *(s+1)!= '\0'){
               s++;
           }
           //
           pomocna1=s;//brisanje
           pomocna2=s;//vracanje
           while(*pomocna1==' '){
               pomocna1++;
           }
           if(*pomocna1=='\0'){
                if(s!=pocetak)
                    s--;
                *s=*pomocna1;
                break;
           }
           while(*s!='\0'){
                *s=*pomocna1;
                if(*s=='\0') break;
                s++;
                pomocna1++;
           }
           s=pomocna2;
           s--;
               
           }
        s++;
       }
       return pocetak;
   }
int main() {
char tekst[] = "   \t Prva   recenica.  \n \t   Druga\nrecenica\t\n\t";
printf("'%s'", whitespace(tekst));
	return 0;
}
