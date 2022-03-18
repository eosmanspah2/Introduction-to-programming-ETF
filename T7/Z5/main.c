#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long long faktorijel (int a){
	long long fakt=1;
	int i;
	for(i=2; i<=a; i++) {
		fakt=fakt*i;
	}
	return fakt;

}
double sinus (double x, int n){
	double suma=0;
	for(int i=1; i<=n; i++) {
		suma+= pow(-1, i-1) * pow(x,2*i-1)/faktorijel(2*i-1);
	}
	return suma;
}
int main(){
	int n;
	double x;
	double razlika;
	printf("Unesite x:\n");
	scanf("%lf", &x);
	printf("Unesite n:\n");
	scanf("%d", &n);
	razlika=fabs(sin(x)-sinus(x,n));
	printf("sin(x)=%f\n",sin(x));
	printf("sinus(x)=%f\n",sinus(x,n));
	printf("Razlika: %f (%.2f%).",razlika,100*razlika);
	return 0;
}
