#include <stdio.h>
long long faktorijel (int a){
	long long fakt=1;
	int i;
	for(i=2; i<=a; i++)
		fakt=fakt*i;
	return fakt;

}
double suma(double x, int b){
	double suma=0;
	for(int i=1; i<=b; i++) {
		double clan=x/faktorijel(i);
		suma=suma+clan;
	}
	return suma;
}
int main(){
	int n;
	double x;
	printf("Unesite broj n u intervalu [1, 12]: ");
	scanf("%d",&n);
	printf("Unesite realan broj x: ");
	scanf("%lf", &x);
	printf("Suma od 1 do %d za x = %.3f je %.3f", n, x, suma(x,n));
	return 0;
}
