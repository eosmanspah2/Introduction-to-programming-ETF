#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	double niz[200];
	int n,i,a,j;
	int brojaci[10]={0};
	do{
	printf("Unesite broj clanova niza: ");
	scanf("%d", &n);
	}while(n<0 || n>100);
	printf("Unesite niz: ");
	for(i=0;i<n;i++)
	{
		scanf("%lf", &niz[i]);
	}
	while(n<100);
	for(i=n-1;i>0;i--)
	{
		if(fabs(niz[i]-2*niz[i-1])<0.0001)
		{
			n++;
			for(j=n;j>i;j--)
			{
            niz[j+1]=niz[j];
			}
			
			niz[i]=(niz[i]+niz[i+1])/2;
			n++;
			
		}
	
	}
	

printf("Nakon ispisa niz glasi:\n");
	for(i=0;i<n;i++)
	{
		printf("%f ", niz[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		a=(int)(niz[i]*10)%10;
		brojaci[a]++;
	}
	for(i=0;i<10;i++)
	{
		if(brojaci[i]!=0)
		{
			printf("Cifra %d se ponavlja %d puta.\n",i,brojaci[i]);
		}
	}
	return 0;
}
