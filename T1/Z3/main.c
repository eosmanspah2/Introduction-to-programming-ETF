#include <stdio.h>
#include <math.h>
int main() {
	printf("Tutorijal 1, Zadatak 3");
	float x1,x2,y1,y2,z1,z2,d;
	printf("Unesite koordinate prve tacke");
	scanf("%f,%f,%f", &x1, &y1, &z1);
	printf("Unesite koordinate druge tacke");
	scanf("%f,%f,%f", &x2, &y2, &z2);
	d=sqrt((x2-x1)*(x2+x1)+(y2-y1)*(y2+y1)+(z2-z1)*(z2+z1));
	printf("\n Udaljenost izmedju dvije unesene tacke je %.2f",d);
	return 0;
}
