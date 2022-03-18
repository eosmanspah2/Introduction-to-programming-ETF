#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int broj,cifra,x,suma=0,i=0;
	do{
	printf("Unesite broj: ");
	scanf("%d", &broj);
	}while(broj<0);
	do{
	printf("Unesite cifru: ");
	scanf("%d", &cifra);
	}while(cifra<0);
	do{
		x=abs(broj%10);
		if(x==cifra){
			broj=broj/10;
			continue;
		}
		suma+=x*pow(10,i);
		i++;
		broj=broj/10;
	} while(broj>0);
	printf("Nakon izbacivanja broj glasi %d.\n", suma);
	printf("Broj pomnozen sa dva glasi %d. \n", 2*suma);
	return 0;
}
