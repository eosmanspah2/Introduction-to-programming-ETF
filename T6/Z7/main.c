#include <stdio.h>
int main(){
	int A[10][10];
	int i,j,min,max,maxr=0,minr=0,temp;
	printf("Unesite elemente matrice: ");
	for(i=0; i<10; i++)
		for(j=0; j<10; j++) 
			scanf("%d", &A[i][j]);
	min=A[0][0];
	max=A[0][0];
	for(i=0; i<10; i++)
		for(j=0; j<10; j++){
			if(min>A[i][j]) {
				min=A[i][j];
				minr=i;
			}
			if(max<A[i][j]) {
				max=A[i][j];
				maxr=i;
			}
		}
	if(maxr==minr) {
		printf("Najmanji i najveci element se nalaze u istom redu.");
		return 0;
	}
	else {
		for(i=0; i<10; i++) {
			temp=A[maxr][i];
			A[maxr][i]=A[minr][i];
			A[minr][i]=temp;
		}
		printf("Nakon zamjene matrica glasi:\n");
		for(i=0; i<10; i++) {
			for(j=0; j<10; j++) {
				printf("%d ",A[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

