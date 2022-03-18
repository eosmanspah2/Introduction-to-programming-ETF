#include <stdio.h>
int main() {
	int i, n;
	printf ("Unesite broj: ");
	scanf ("%d", &n);
	if(n==1)
		printf("Broj nije ni prost ni slozen.");
	if(n<=0)
		printf("Broj nije prirodan.");
	for(i=2; i<n; i++){
		if(n%i==0){
			printf("Broj je slozen. \n");
			break;
		}
		else if(i==n-1){
		printf ("Broj je prost. \n");
		break;
		}
	}
	return 0;
}
