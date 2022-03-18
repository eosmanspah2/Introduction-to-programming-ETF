#include <stdio.h>
int main() {
	printf("Tutorijal 1, Zadatak 5");
	float VT,MT,cmt,cvt,up,nir,udv,umt;
	printf ("Unesite potrosnju velike i male tarife");
	scanf ("%f,%f", &VT, &MT);
	printf ("Unesite cijene potrosnje velike i male tarife");
	scanf ("%f,%f", &cvt, &cmt);
	up=VT+MT;
	udv=VT/up*100;
	umt=MT/up*100;
	nir=(cmt*MT)+(cvt*VT);
	printf("\n Ukupna potrosnja je %.2f", up);
	printf("\n Udio velike tarife u ukupnoj potrosnji je %.2f", udv);
	printf("\n Udio male tarife u ukupnoj potrosnji je %.2f", umt);
	printf("\n Iznos racuna je %f", nir);
	return 0;
}
