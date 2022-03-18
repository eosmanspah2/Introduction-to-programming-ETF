#include <stdio.h>
int drugi(int niz[],int velicina){
	int prvi_max=0, drugi_max=0, i, index=0,provjera=0;
	for(i=0; i<velicina; i++){
		if(niz[i]>=prvi_max) {
			prvi_max=niz[i];
		}
	}
	for(i=0;i<velicina;i++){
		if((niz[i]>=drugi_max) && (niz[i]!=prvi_max)) {
			drugi_max=niz[i];
			index=i;
           provjera=1;
		}
	}
	if(provjera==0 || prvi_max==0){
		index=-1;
	}
	return index;
}
int main(){
	int niz[1000];
	int i;
	printf("Unesite niz brojeva: ");
	for(i=0; i<1000; i++){
		scanf("%d", &niz[i]);
		if(niz[i]==-1) {
			break;
		}
	}
	printf("Indeks drugog po velicini je: %d", drugi(niz,i));
	return 0;
}
