#include <stdio.h>
int obrnut(int x){
	int suma=0;
	while(x>0){
		int cifra=x%10;
		x/=10;
		suma=suma*10+cifra;
	}
	return suma;
}
int main(){
	printf("Broj je: %d!!", obrnut(12345));
	return 0;
}
