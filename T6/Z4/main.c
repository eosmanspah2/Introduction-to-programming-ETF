#include <stdio.h>
int main(){
	int niz[10];
	int i,j,x,n=0;
	printf("Unesite elemente niza: ");
	for(i=0; i<10; i++) {
		scanf("%d", &niz[i]);
		if(niz[i]==-1)break;
		n++;
	}
	printf("Unesite element koji treba izbaciti: ");
	scanf("%d",&x);
	for(i=0; i<n; i++) {
		if(niz[i]==x) {
			for(j=i+1; j<n; j++) {
				niz[j-1]=niz[j];
			}
			n--;
			i--;
		}
	}
	printf("Novi niz glasi: ");
	for(i=0; i<n; i++) {
		if(i==n-1) {
			printf("%d",niz[i]);
		} else
			printf("%d,",niz[i]);
	}
	return 0;
}
