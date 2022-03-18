#include <stdio.h>
int main() {
	int A[10][10];
	int i, j, min;
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			scanf("%d", &A[i][j]);
	min=A[0][0];
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			if(i==j)
				if(A[i][j]<min)
					min=A[i][j];
	printf("%d", min);
	return 0;
}
