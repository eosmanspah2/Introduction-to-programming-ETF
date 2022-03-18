#include <stdio.h>
int main() {
	int a,b,c,d;
	printf ("Unesite tri broja: ");
	scanf ("%d %d %d", &a,&b,&c);
	if((a<50 || a>200) && (b<50 || b>200) && (c<50 || c>200)){
		printf ("Svi brojevi nisu iz intervala od 50 do 200");
	}
	else{
		if(a>=b && b>=c)
			printf("Brojevi poredani po velicini glase: %d,%d,%d", a, b, c);
		else if(b>=a && a>=c)
			printf("Brojevi poredani po velicini glase: %d,%d,%d", b, a, c);
		else if(a>=c && c>=b)
			printf("Brojevi poredani po velicini glase: %d,%d,%d", a, c, b);
		else if(c>=b && b>=a)
			printf("Brojevi poredani po velicini glase: %d,%d,%d", c, b, a);
		else if(c>=a && a>=b)
			printf("Brojevi poredani po velicini glase: %d,%d,%d", c, a, b);
		else if(b>=c && c>=a)
		printf("Brojevi poredani po velicini glase: %d,%d,%d", b, c, a);
		if((a==b) && (a==c)) d=1;
		else if (((a==b)&&(a!=c)) || ((b==c)&&(b!=a)) || ((c==a)&&(c!=b))) d=2;
		else d=3;
		printf("\nUnesena su %d razlicita broja",d);
	}
	return 0;
}
