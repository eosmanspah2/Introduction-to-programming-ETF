#include <stdio.h>
int main() {
	int d,m;
	printf ("Dan: ");
	scanf("%d", &d);
	printf("Mjesec: ");
    scanf ("%d", &m); 
	if(d>=20 && m==1 || d<=18 && m==2)
		printf("Vas znak je Vodolija!");
	else if(d>=19 && m==2 || d<=20 && m==3)
		printf("Vas znak je Riba!");
	else if(d>=21 && m==3 || d<=19 && m==4)
		printf("Vas znak je Ovan!");
	else if(d>=20 && m==4 || d<=21 && m==5)
		printf("Vas znak je Bik!");
	else if(d>=22 && m==5 || d<=20 && m==6)
		printf("Vas znak je Blizanci!");
	else if(d>=22 && m==6|| d<=22 && m==7)
		printf("Vas znak je Rak!");
	else if(d>=23 && m==7 || d<=22 && m==8)
		printf("Vas znak je Lav!");
	else if(d>=23 && m==8 || d<=22 && m==9)
		printf("Vas znak je Djevica!");	
	else if(d>=23 && m==9 || d<=22 && m==10)
		printf("Vas znak je Vaga!");
	else if(d>=23 && m==10 || d<=21 && m==11)
		printf("Vas znak je Skorpija!");	
	else if(d>=22 && m==11 || d<=21 && m==12)
		printf("Vas znak je Strijelac!");
	else if(d>=22 && m==12 || d<=19 && m==1)
		printf("Vas znak je Jarac!");
	else
		printf("Vas unos nije ispravan");
return 0;	
}


