#include <stdio.h>
int main() {
	char spol;
	int visina, obimstruka, masa,opcija,kilaza,bst,z;
	double bmi, rfm, bmi2;
	do{
		printf("Unesite spol (mM/zZ), visinu (u cm), obim struka (u cm), tezinu (u kg): ");
    	scanf(" %c %d %d %d", &spol, &visina, &obimstruka, &masa);
		if(spol!='m' && spol!='M' && spol!='z' && spol!='Z')
			printf("\nGreska u unosu za spol.\n");
		if(visina<100 || visina>220 || obimstruka<40 || obimstruka>200 || masa>200)
			printf("\nGreska u unosu atributa.\n");
	}while((spol!='m' && spol!='M' && spol!='z' && spol!='Z') || (visina<100 || visina>220 || obimstruka<40 || obimstruka>200 || masa<0 || masa>200));
	do{
		printf("Odaberite zeljenu opciju za trening:\n");
		printf("[1] Joga\n"); 
		printf("[2] Joga PLUS\n");
		printf("[3] Cardio\n");
		printf("[4] Super cardio\n");
		printf("[5] Total Body\n");
		printf("[6] Body Builder\n");
		printf(">> ");
		scanf("%d",&opcija);
		if(opcija<1 || opcija>6)
			printf("Greska u odabiru opcija.\n");
	}while(opcija<1 || opcija>6);
	do{
		printf("Unesite broj kilograma za koliko zelite smanjiti svoju masu (1-10): ");
		scanf("%d", &kilaza);
		if(kilaza<0 || kilaza>10)
			printf("Greska u unosu za kilazu. Ocekivane vrijednosti (0-10)");
	}while (kilaza<0 || kilaza>10);
	if(opcija==1)
		z=200;
	else if(opcija==2)
		z=300;
	else if(opcija==3)
		z=400;
	else if(opcija==4)
		z=500;
	else
		z=600;
	bmi=(float)masa/(((float)visina/100)*(float)visina/100);
	bmi2=((float)masa-(float)kilaza)/(((float)visina/100)*(float)visina/100);
	if(bmi<18.5 && opcija>2){
		printf("Odabrani program nije preporucen uz predate podatke.");
		return 0;
	}
	 else if(bmi2<18.5 && opcija>2){
		printf("Odabrani program nije preporucen uz predate podatke.");
		return 0;
	}
	if(spol=='m'){
		rfm=64-((20*(float)visina)/(float)obimstruka);
	}
	else{
		rfm=76-((20*(float)visina)/(float)obimstruka);
	}
	if (bmi<=18.5){
		printf("Vas BMI iznosi: %.2f (nizak).\n", bmi);
		printf("Vas RFM iznosi: %.2f %%.\n",rfm);
	}
	else if((bmi>18.5) && (bmi<25)){
		printf("Vas BMI iznosi: %.2f (normalan).\n",bmi);
		printf("Vas RFM iznosi: %.2f %%.\n", rfm);
	}
	else if((bmi>=25) && (bmi<=30)){
		printf("Vas BMI iznosi: %.2f (povisen).\n",bmi);
		printf("Vas RFM iznosi: %.2f %%.\n",rfm);
	}
	else if(bmi>30){
		printf("Vas BMI iznosi: %.2f (visok).\n", bmi);
		printf("Vas RFM iznosi: %.2f %%.\n",rfm);
	}
	if(bmi2<18.5){	
		return 0;
	}
	bst=(kilaza*7000)/(z*5);
	printf("Minimalni broj sedmica za treniranje: %d.\n", bst);
	return 0;
}
