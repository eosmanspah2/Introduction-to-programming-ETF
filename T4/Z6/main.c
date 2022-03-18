#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));
	int a,n;
	a=rand()%100;
	printf("Izabrao sam broj. Probaj ga pogoditi (-1 za izlaz).\n");
	do{
		printf("Unesite broj: ");
		scanf("%d",&n);
		if(n==-1)
		break;
		if(n<a)
		printf("VECI\n");
		if(n>a) printf("MANJI\n");
		if(n==a) printf("JEDNAK\n");
	}while(n!=a);
	printf("Kraj igre.");
	return 0;
}
