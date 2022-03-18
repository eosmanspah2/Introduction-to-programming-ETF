#include <stdio.h>
#include <math.h>
void zaokruzi(double* niz, int duzina){
	double* temp=niz;
	while (niz<temp+duzina){
		double *a=niz;
		*a=*a*10;
		*a=round(*a);
		*a=*a/10;
		niz++;
	}
}
int main(){
	int duzina;
	double niz[100];
	scanf("%d", &duzina);
	int i;
	for (i=0;i<duzina;i++)
		scanf("%lf", &niz[i]);
	zaokruzi(niz,duzina);
	for(i=0;i<duzina;i++)
		printf("%lf ", niz[i]);
	return 0;
}

