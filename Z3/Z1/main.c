#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double f(double x)
{
	return x;
}
double g(double x)
{
	return x*x;
}
double h(double x)
{
	double y;
	y=f(x)-g(x);
	return y;
}
double presjek(double A, double B, int*status)
{
	double H=1;
	double provjera1, provjera2;
	/*provjera za pocetni interval*/
	H=(A+B)/2;
	if((fabs(h(A))<0.0001)&&(fabs(h(H))<0.0001)&&(fabs(h(B))<0.0001)) {
		*status=2;
		return 0;
	}
	if(fabs(h(A))<0.0001) {
		*status=0;
		return A;
	}
	if(fabs(h(H))<0.0001) {
		*status=0;
		return H;
	}
	if(fabs(h(B))<0.0001) {
		*status=0;
		return B;
	}
	while(fabs(B-A)>=0.00001) {
		provjera1=h(A)*h(H);
		provjera2=h(H)*h(B);

		/*provjera za interval [A,H]*/
		if((provjera1<0 && provjera2<0) || (provjera1<0 && provjera2>0)) {

			B=H;
			H=(A+B)/2;
		}

		/*provjera za interval [B,H]*/
		else if((provjera2<0) && (provjera1>0)) {

			A=H;
			H=(A+B)/2;
		}
		/*provjera za cijeli interval [A,B]*/
		else {
			if(presjek(H,B,status)!=0) {
				return presjek(H,B,status);
			} else
				return presjek(A,H,status);
			/*break*/

		}


		if((fabs(h(A))<0.0001)&&(fabs(h(H))<0.0001)&&(fabs(h(B))<0.0001)) {
			*status=2;
			return 0;
		}
		if(fabs(h(A))<0.0001) {
			*status=0;
			return A;
		}
		if(fabs(h(H))<0.0001) {
			*status=0;
			return H;
		}
		if(fabs(h(B))<0.0001) {
			*status=0;
			return B;
		}
	}
	*status=1;
	return 0;

}


int main()
{
	int A,B;
	int status=0;
	double rez;
	printf("Unesite interval\n");
	scanf("%lf %lf", &A, &B);
	rez=presjek(A,B,&status);
	printf("%.2f %d",rez,status);


	return 0;
}
