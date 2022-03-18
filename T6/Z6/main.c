#include <stdio.h>
int main() {
	double A[100][100],s=0;
	int i,j,x,y;
	printf("Unesite dimenzije matrice: ");
	scanf("%d %d", &x, &y);
	printf("Unesite elemente matrice: ");
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			scanf("%lf", &A[i][j]);
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			if(i==0 || j==0 || i==x-1 || j==y-1)
				s+=A[i][j];
	printf("Suma elemenata na rubu je %.2f",s);
	return 0;
}
