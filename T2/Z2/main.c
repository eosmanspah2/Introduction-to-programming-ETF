#include <stdio.h>
#define NSP1 90.0 /*NSP1-donja granica normalnog sist.pritiska*/
#define NSP2 120.0 /*NSP2-gornja granica normalnog sist.pritiska*/
#define NDP1 60.0 /*NPD1-donja granica dijastolickog pritiska*/
#define NDP2 80.0 /*NDP2- gornja granica dijastolickog pritiska*/
#define NP1 55.0 /*NP1-donja granica pulsa*/
#define NP2 100.0 /*NP2-gornja granica pulsa*/
int main() {
	float SP,DP,P; 
	printf("Dobrodosli kod Vaseg kucnog ljekara! \n");
	printf("Unesite sistolicki, dijastolicki pritisak i puls: ");
	scanf ("%f %f %f", &SP, &DP, &P);
	if(SP>=NSP1 && SP<=NSP2) {
	printf("SP: normalan\n"); 
	}
	else{
	printf("SP: nije normalan\n");
	}
	if(DP>=NDP1 && DP<=NDP2){
	printf ("DP: normalan\n");
	}
	else{
	printf ("DP: nije normalan\n");
	}
	if(P>=NP1 && P<=NP2){
	printf ("Puls: normalan\n");
	}
	else{
	printf ("Puls: nije normalan\n"); 
	}
	return 0;
}
