#include <stdio.h>
#include <math.h>
double stepen(double x)
{
	double static proizvod=1;
	double static pomocna;
	if(fabs(x-pomocna)>0.0001) {
		proizvod=1;
	}
	pomocna=x;
	proizvod=proizvod*x;
	return proizvod;
}

void stepenuj_niz(double A[], int s[], int duzina)
{
	int i,j;
	double pomocna;
	for(i=0; i<duzina; i++) {
		for(j=0; j<s[i]; j++) {
			pomocna=stepen(A[i]);
		}
		A[i]=pomocna;
		stepen(0);
	}
}


int main()
{
	int duzina, s[1000], i;
	double A[1000];
	printf("Unesite duzinu niza:\n");
	scanf("%d", &duzina);
	printf("Unesite niz A\n");
	for(i=0; i<duzina; i++) {
		scanf("%lf", &A[i]);
	}
	printf("Unesite niz s\n");
	for(i=0; i<duzina; i++) {
		scanf("%d", &s[i]);
	}
	stepenuj_niz(A,s,duzina);
	for(i=0; i<duzina; i++) {
		printf("%.2f\n", A[i]);
	}



	return 0;
}
