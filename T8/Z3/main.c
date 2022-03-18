#include <stdio.h>
float maxtemp (float p[], int br){
	int i;
	float max_temp=p[0];
	for(i=0; i<br; i++) {
		if (p[i]>max_temp) {
			max_temp=p[i];
		}
	}
	return max_temp;
}
float prtemp(float p[], int br){
	int i;
	float pr_temp;
	float suma=0;
	for(i=0; i<br; i++) {
		suma=suma+p[i];
	}
	pr_temp=suma/br;
	return pr_temp;
}
int main(){
	float niz_temp[1000];
	int i;
	int br;
	printf("Unesite broj mjerenja:\n");
	scanf("%d", &br);
	printf("Unesite temperature: ");
	for(i=0; i<br; i++)
		scanf("%f", &niz_temp[i]);
	printf("Maksimalna temperatura: %.1f\n", maxtemp(niz_temp,br));
	printf("Prosjecna temperatura: %.1f\n", prtemp(niz_temp,br));
	return 0;
}
