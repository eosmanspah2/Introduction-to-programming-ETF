#include <stdio.h>
float maxtemp (float p[8]){
	int i;
	float max_temp=p[0];
	for(i=0; i<8; i++) {
		if (p[i]>max_temp) {
			max_temp=p[i];
		}
	}
	return max_temp;
}
float prtemp(float p[8]){
	int i;
	float pr_temp;
	float suma=0;
	for(i=0; i<8; i++) {
		suma=suma+p[i];
	}
	pr_temp=suma/8;
	return pr_temp;
}
int main(){
	float niz_temp[8];
	int i;
	printf("Unesite temperature: ");
	for(i=0; i<8; i++) {
		scanf("%f", &niz_temp[i]);
	}
	printf("Maksimalna temperatura: %.1f\n", maxtemp(niz_temp));
	printf("Prosjecna temperatura: %.1f\n", prtemp(niz_temp));
	return 0;
}
