#include <stdio.h>
#define PI 3.14
int main() {
	printf("Tutorijal 1, Zadatak 4");
	float a,b,c,r,h,p1,p2,v1,v2,P,V;
	printf("Unesite dimenzije kvadra");
	scanf ("%f,%f,%f", &a, &b, &c);
	printf ("Unesite poluprecnik baze, te visinu valjka");
	scanf ("%f,%f", &r, &h);
	p1=2*(a*b+b*c+a*c);
	p2=2*r*PI*h;
	v1=a*b*c;
	v2=r*r*h*PI;
	P=p1+p2;
	V=v1+v2;
	printf("\n Povrsina tijela sa slike je %.2f", P);
	printf("\n Zapremina tijela sa slike je %.2f", V); 
	return 0;
}
