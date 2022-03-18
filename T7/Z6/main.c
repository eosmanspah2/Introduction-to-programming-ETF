#include <stdio.h>
int pascal(int x, int y){
	if(y==x || y==1) {
		return 1;
	} else {
		return pascal(x-1,y-1)+pascal(x-1,y);
	}
}
int main(){
	int i, j, n;
	printf ("Unesite n:\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		for(j=1; j<=i; j++) {
			printf("%d   ", pascal(i,j));
		}
		printf("\n");
	}
	return 0;
}
