#include <stdio.h>
#include <math.h>
void unesi(char niz[], int velicina)
{
	char znak=getchar();
	if(znak =='\n') znak=getchar();
	int i=0;
	while (i<velicina-1 && znak!='\n') {
		niz[i]=znak;
		i++;
		znak=getchar();
	}
	niz[i]='\0';
}
char* nadji_zbir(char *s)
{
	double temp, niz_brojeva[3]= {0};
	int provjera=1, brojac=0, predznak=1;
	double stepen=10;
	char *pokazivac_1=s, *pokazivac_2=s, *pokazivac_3=s;
	/* Trazenje realnih brojeva u stringu i ubacujemo  u niz*/
	while (*s != '\0') {
		while(!((*s>='0' && *s<='9') || *s=='-')) {
			s++;
		}
		if(brojac==0) {
			pokazivac_1=s;
		}
		if(brojac==1) {
			pokazivac_2=s;
		}
		if(brojac==2) {
			pokazivac_3=s;
		}
		if(*s=='-') {
			predznak=-1;
			s++;
		}
		if(*s>='0' && *s<='9') {
			temp=0;
			while(*s>='0' && *s<='9') {
				temp=temp*10+*s-'0';
				s++;
			}
			if(*s=='.') {
				s++;
			}
			while(*s>='0' && *s<='9') {
				temp+=(*s-'0')/stepen;
				s++;
				stepen=stepen*10;
			}

		} else predznak=1;
		s++;
		niz_brojeva[brojac]=predznak*temp;
		predznak=1;
		stepen=10;
		brojac++;
		/*Provjeravanje uslova zadatka*/
		if(brojac==3) {
			/*Ako niz od 3 uzastopna realna broja ispunjava uslove zadatka, vraća pokazivac na pocetak prvog broja*/
			if(fabs(niz_brojeva[0]+niz_brojeva[1]-niz_brojeva[2])<0.00001) {
				return pokazivac_1;
			}
			/*Ako ne ispunjavaju uslove zadatka, pokazivaci se pomjeraju i trazi se novi broj*/


			pokazivac_1=pokazivac_2;
			pokazivac_2=pokazivac_3;
			brojac--;
			niz_brojeva[0]=niz_brojeva[1];
			niz_brojeva[1]=niz_brojeva[2];

		}
	}
	return NULL;
}

void razlike (char* s)
{
	char *pokazivac_1=s, *pokazivac_2=s, *pokazivac_3=s;
	double niz_brojeva[2]= {0}, temp, stepen=10, razlika;
	int predznak=1, brojac=1;

	pokazivac_1=nadji_zbir(pokazivac_1);
	while (pokazivac_1!=NULL) {
		/*Kao u prethodnoj funkciji, trazimo realne brojeve u stringu, samo sto ne krecemo od prvog znaka,
		vec od adrese na koju pokazuje prvi pokazivac*/
		brojac=0;
		while(brojac<2) {

			while(!((*pokazivac_1>='0' && *pokazivac_1<='9') || *pokazivac_1=='-')) {
				pokazivac_1++;
			}
			if(brojac==0) {
				pokazivac_2=pokazivac_1;
			} else if(brojac==1) {
				pokazivac_3=pokazivac_1;
			}
			if(*pokazivac_1=='-') {
				predznak=-1;
				pokazivac_1++;
			}
			if(*pokazivac_1>='0' && *pokazivac_1<='9') {
				temp=0;
				while(*pokazivac_1>='0' && *pokazivac_1<='9') {
					temp=temp*10+*pokazivac_1-'0';
					pokazivac_1++;
				}
				if(*pokazivac_1=='.') {
					pokazivac_1++;
				}
				while(*pokazivac_1>='0' && *pokazivac_1<='9') {
					temp=temp+(*pokazivac_1-'0')/stepen;
					pokazivac_1++;
					stepen=stepen*10;
				}
			} else predznak=1;
			pokazivac_1++;
			if(brojac==0) {
				niz_brojeva[brojac]=predznak*temp;
			}
			if(brojac==1) {
				niz_brojeva[brojac]=predznak*temp;
			}
			predznak=1;
			stepen=10;
			brojac++;
			if(brojac==2) {
				razlika=niz_brojeva[0]-niz_brojeva[1];
				printf("%g - %g = %g\n", niz_brojeva[0],niz_brojeva[1],razlika);
				pokazivac_1=pokazivac_3;
			}
		}
		pokazivac_1=nadji_zbir(pokazivac_1);
	}

}





int main()
{
	char tekst[100];
	printf("Unesite tekst:\n");
	unesi(tekst,100);
	if(nadji_zbir(tekst)!=NULL)
		printf("Nije nula");
	else printf("Nula ipak");
	return 0;
}
