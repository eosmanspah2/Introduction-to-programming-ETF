#include <stdio.h>
#include <math.h>
#define pi 4.0*atan(1.0)
struct Tacka{
	double x,y;
};

struct Kruznica{
	struct Tacka centar;
	double poluprecnik;
};

struct Tacka unos_tacke() {
	struct Tacka t;
	printf("Unesite koordinate tacke (x, y): ");
	scanf("%lf,%lf", &t.x, &t.y);
	return t;
}

struct Kruznica unos_kruznice(){
	struct Kruznica k;
	printf("Unesite centar kruznice:\n");
	k.centar=unos_tacke();
	printf("Unesite poluprecnik kruznice: ");
	scanf("%lf", &k.poluprecnik);
	return k;
}

float udaljenost(struct Tacka t1, struct Tacka t2){
	return sqrt((t1.x-t2.x)*(t1.x-t2.x)+(t1.y-t2.y)*(t1.y-t2.y));
	
}
double obim_kruznice(struct Kruznica k){
	return 2*pi*k.poluprecnik;
}
double povrsina_kruznice(struct Kruznica k){
	return pi*k.poluprecnik*k.poluprecnik;
}



int main() {
	struct Kruznica k;
	struct Tacka t;
	double d;
	printf("Unesite kruznicu:\n");
	k=unos_kruznice();
	printf("Unesite neku tacku:\n");
	t=unos_tacke();
	d=udaljenost(t,k.centar);
	if(d<k.poluprecnik)
		printf("Tacka je unutar kruznice.\n");
	else if(d==k.poluprecnik)
		printf("Tacka je na kruznici.\n");
	else 
		printf("Tacka je izvan kruznice.\n");
	printf("Obim kruznice: %.3f\n", obim_kruznice(k));
	printf("Povrsina kruznice: %.3f\n", povrsina_kruznice(k));
	
	return 0;
	
}
