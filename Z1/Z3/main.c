#include <stdio.h>
int main(){
	char slovo;
	int brojac=0,broj,sabit=0,fadila=0,greska=0;
	printf("Unesite pogotke za Sabita: ");
	do{
		brojac=0;
		sabit=0;
	    if(greska==1){
			printf("Neispravni ulazni podaci.\n");
			printf("Unesite pogotke za Sabita: ");
			scanf("%c",&slovo);
			scanf("%c",&slovo);
		}
		greska=0;
		do{
			scanf("%c", &slovo);
			if(slovo=='S'){
				brojac++;
				scanf("%d", &broj);
				sabit+=broj;
			}
			else if(slovo=='D'){
				brojac++;
				scanf("%d", &broj);
				sabit+=2*broj;
			}
			else if(slovo=='T'){
				brojac++;
				scanf("%d", &broj);
				sabit+=3*broj;
			}
			else if(slovo=='X'){
				brojac++;
			}
			else if(slovo=='O'){
				brojac++;
				sabit+=25;
			}
			else if(slovo=='I'){
				brojac++;
				sabit+=50;
			}
			else{
				greska=1;
				brojac++;
			}
		}while(brojac<9);
	}while(greska==1); 
	scanf("%c", &slovo);
	scanf("%c", &slovo);
	printf("Unesite pogotke za Fadilu: ");
	do{
		brojac=0;
		fadila=0;
		if(greska==1){
			printf("Neispravni ulazni podaci.\n");
			printf("Unesite pogotke za Fadilu: ");
			scanf("%c", &slovo);
			scanf("%c", &slovo);
		}
		greska=0;
		do{
			scanf("%c", &slovo);
			if(slovo=='S'){
				brojac++;
				scanf("%d", &broj);
				fadila+=broj;
			}
			else if(slovo=='D'){
				brojac++;
				scanf("%d", &broj);
				fadila+=2*broj;
			}
			else if(slovo=='T'){
				brojac++;
				scanf("%d", &broj);
				fadila+=3*broj;
			}
			else if(slovo=='X'){
				brojac++;
			}
			else if(slovo=='O'){
				brojac++;
				fadila+=25;
			}
			else if(slovo=='I'){
				brojac++;
				fadila+=50;
			}
			else{
				greska=1;
				brojac++;
			}
		}while(brojac<9);
	}while(greska==1);
	if((fadila>sabit) && (sabit<301) && (fadila<=301)){
		printf("Sabit je ostvario %d poena, Fadila je ostvarila %d poena.", sabit, fadila);
		printf(" Pobjednik je Fadila, kojoj je ostalo jos %d poena do pobjede.\n", 301-fadila);
	}
	else if((fadila<sabit) && sabit<=301 && fadila<301){
		printf("Sabit je ostvario %d poena, Fadila je ostvarila %d poena.", sabit, fadila);
		printf(" Pobjednik je Sabit, kojem je ostalo jos %d poena do pobjede.\n", 301-sabit);
	}
	else if((fadila==sabit) && sabit<=301 && fadila<=301){
	    printf("Sabit je ostvario %d poena, Fadila je ostvarila %d poena.", sabit, fadila);
		printf(" Rezultat je nerijesen.\n");
	}
	else if(sabit>301 && fadila<=301){
		printf("Sabit je premasio potrebni broj poena, Fadila je ostvarila %d poena.", fadila);
		printf(" Pobjednik je Fadila, kojoj je ostalo jos %d poena do pobjede.\n", 301-fadila);
	}
	else if(sabit<=301 && fadila>301){
		printf("Sabit je ostvario %d poena, Fadila je premasila potrebni broj poena.", sabit);
		printf(" Pobjednik je Sabit, kojem je ostalo jos %d poena do pobjede.\n", 301-sabit);
	}
	else{
		printf("Oba igraca su premasila potrebni broj poena, rezultat je nerijesen.");
	}
	return 0;
}
