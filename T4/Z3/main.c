#include <stdio.h>
int main() {
	int i,j,p;
	printf("  X  |");
	for(i=0;i<10;i++){
		for(j=0;j<46;j++){
			if(i==0 && j==3)
				printf("+");
		}
	}
	for(i=1;i<=10;i++){
		for(j=0;j<=10;j++){
			p=i*j;
			if(j==0)
				printf("%3d  |",i);
			else 
				printf(" %d	",p);
		} 
		printf("\n");
	}
	return 0;
}
