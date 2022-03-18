#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Vrijeme {
	int sati;
	int minute;
	int sekunde;
};

struct Vrijeme unos_vremena(){
	struct Vrijeme v;
	scanf("%d %d %d", &v.sati, &v.minute, &v.sekunde);
	return v;
}
int proteklo(struct Vrijeme v1, struct Vrijeme v2){
	return fabs(3600*v1.sati+60*v1.minute+v1.sekunde-3600*v2.sati-60*v2.minute-v2.sekunde);
}
int main() {
	struct Vrijeme v1, v2;
	printf("Unesite prvo vrijeme (h m s): \n");
	v1=unos_vremena();
	printf("Unesite drugo vrijeme (h m s): \n");
	v2=unos_vremena();
	printf("Izmedju dva vremena je proteklo %d sekundi.", proteklo(v1,v2));
	return 0;
}
