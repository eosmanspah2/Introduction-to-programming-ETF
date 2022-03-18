#include <stdio.h>
#include <math.h>
int main() {
	int i,n;
	double S=0,a; 
	printf("Unesite broj n: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		a=pow(-1,i-1)/i;
		S+=a;
	}
	printf ("Koristeci %d clanova suma je %.3f.", n, S);
	return 0;
}
