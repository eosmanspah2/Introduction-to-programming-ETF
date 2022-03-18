#include <stdio.h>
int main() {
	int x,i,niz[101]={0};
	printf("Unesite brojeve:\n");
	do{
		scanf("%d", &x);
		if((x<0 || x>100) && x!=-1){
			printf("Brojevi moraju biti izmedju 0 i 100!\n");
			continue;
		}
		if(x==-1)
			break;
		niz[x]+=1;
	}while(x!=-1);
	for(i=0;i<101;i++){
		if(niz[i]!=0)
		printf("Broj %d se javlja %d puta.\n",i,niz[i]);
	}
	return 0;
}
