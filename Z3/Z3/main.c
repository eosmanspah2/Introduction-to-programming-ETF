#include <stdio.h>
#include <math.h>
#define br_ko 100

int provjeri(int mat[][br_ko], int V)
{
	int i,j,provjera=1;
	for(i=0; i<V; i++) {
		for(j=0; j<br_ko; j++) {
			if(*(*(mat+i)+j)==-1) {
				break;
			}
			if(*(*(mat+i)+j)<1) {
				provjera=0;
			}

		}
		if(j==br_ko) return 0;
	}
	return provjera;
}
int fibonacci_matrica(int mat[][br_ko], int V)
{
	int i,j,fib1,fib2,temp;
	for(i=0; i<V; i++) {
		fib1=0;
		fib2=1;
		for(j=0; j<100; j++) {

			if(mat[i][j]==-1) {
				break;
			}
			while(fib2<mat[i][0]) {
				temp=fib1;
				fib1=fib2;
				fib2+=temp;
			}
			if(fib2>mat[i][0]) {

				return 0;
			}

			break;
		}

		for(j=1; j<100; j++) {

			if(mat[i][j-1]==-1 || mat[i][j]==-1) {
				break;
			}
			temp=fib1;
			fib1=fib2;
			fib2+=temp;
			if(mat[i][j]!=fib2) {

				return 0;
			}
		}




	}

	return 1;
}

int main()
{
	int i,j,provjera=1,V;
	int mat[100][100];
	do {
		printf("Unesite visinu matrice: ");
		scanf("%d", &V);
	} while(V<=0);
	printf("Unesite matricu:\n");

	for(i=0; i<V; i++) {
		if(provjera==0) {
			i=0;
			provjera=1;

		}
		for(j=0; j<100; j++) {
			scanf("%d", &mat[i][j]);
			if(mat[i][j]==-1) {
				break;
			}
			if(mat[i][j]<1) {
				provjera=0;
				break;
			}

		}
	}
	if(provjeri(mat,V)==1) {
		printf("Matrica je validna.\n");
	}
	if(fibonacci_matrica(mat,V)==1) {
		printf("Matrica je Fibonacci matrica.");
	} else
		printf("Matrica nije Fibonacci matrica.");




	return 0;
}
