#include <stdio.h>
int main() {
	int n,i,j;
	printf ("Unesite broj n: \n");
	scanf ("%d", &n );
	if (n%2==1 || n<4 || n>100)
		printf ("Broj je van trazenog opsega.  ");
	else{
		for (i=0; i<n ; i++){
			for (j=0; j<2*n; j++) {
				if(i==0 || i==n-1 || j==0 || j==2*n-1 || (i==j && i<n/2) || (i+j==2*n-1 && i<n/2-1) || (i==n/2-1 && i<j && j<2*n-(n/2-1)) )
					printf ("+");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
