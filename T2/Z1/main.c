#include <stdio.h>
#define NSP1 90.0 /*NSP1-donja granica normalnog sist.pritiska*/
#define NSP2 120.0 /*NSP2-gornja granica normalnog sist.pritiska*/
int main() {
	float SP; 
	printf("Unesite vrijednost sistolickog pritiska: ");
	scanf("%f", &SP);
	if(SP>=NSP1 && SP<=NSP2){
	printf("Sistolicki pritisak je normalan! \n"); 
	}
	else{
	printf("Sistolicki pritisak nije normalan! \n");
	}
	return 0;
}
