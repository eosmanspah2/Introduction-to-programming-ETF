#include <stdio.h>
#define BROJ_EL 10
int main() {
	int niz[BROJ_EL],suma1=0,suma2=0,i,b=0,max,min;
	float prosjek1,prosjek2;
	for(i=0; i<BROJ_EL; i++){
		printf("Unesite %d. cijeli broj: ", i+1);
		scanf("%d", &niz[i]);
		suma2=suma2+niz[i];
		if(niz[i]%2==0){
			suma1=suma1+niz[i];
			b++;
		}
		if(i==0){
			max=niz[0];
			min=niz[0];
		}
		if(niz[i]>max){
			max=niz[i];
		}
		if(niz[i]<min){
			min=niz[i];
		}
	}
	prosjek1=(float)suma1/b;
	prosjek2=(float)suma2/BROJ_EL;
	if(b==0){
		prosjek1=0;
	}
	printf("Srednja vrijednost unesenih brojeva je %.2f.\n", prosjek2);
	printf("Srednja vrijednost parnih brojeva je %.2f.\n", prosjek1);
	printf("Najveci element je %d a najmanji %d.", max, min);
	return 0;
}
