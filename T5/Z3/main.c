#include <stdio.h>
#include <math.h>
#define be 5
int main() {
	float A[be],B[be],C[be];
	int i;
	printf("Unesite clanove niza A: ");
	for(i=0;i<be;i++)
		scanf("%f", &A[i]);
	printf("Unesite clanove niza B: ");
	for(i=0;i<be;i++)	
		scanf("%f", &B[i]);
	for(i=0;i<be;i++)
		C[i]=2*A[i]+B[i];
	printf("Niz A glasi: ");
	for(i=0;i<be;i++){
		if(i==4)
			printf("%.2f", round(A[i]*100)/100);
		else
			printf("%.2f, ", round(A[i]*100)/100);
	}
	printf("\nNiz B glasi: ");
	for(i=0;i<be;i++){
		if(i==4)
			printf("%.2f", round(B[i]*100)/100);
		else
			printf("%.2f, ", round(B[i]*100)/100);
	}	
	printf("\nNiz C glasi: ");
	for(i=0;i<be;i++){
		if(i==4)
			printf("%.2f", round(C[i]*100)/100);
		else
		printf("%.2f, ", round(C[i]*100)/100);
	}
	return 0;
}
