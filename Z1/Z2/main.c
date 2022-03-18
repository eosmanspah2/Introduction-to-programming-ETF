#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
	double p1,p2,q1,q2,r1,r2,X,Y,X1,Y1,X2,Y2,d,a;
	printf ("Unesite koordinate centra kruznice A: ");
	scanf ("%lf %lf", &p1, &q1);
	printf ("Unesite poluprecnik kruznice A: ");
	scanf ("%lf", &r1);
	printf ("Unesite koordinate centra kruznice B: ");
	scanf ("%lf %lf", &p2, &q2);
	printf ("Unesite poluprecnik kruznice B: ");
	scanf ("%lf", &r2);
	d=sqrt((p1-p2)*(p1-p2)+(q1-q2)*(q1-q2));
	if( fabs(p1-p2)<0.0001 && fabs(q1-q2)<0.0001 && fabs(r1-r2)<0.0001 )
		printf("Kruznice su identicne.\n");
	else if ((r1>r2 && r1>(r2+d)) || (r2>r1 && r2>(r1+d)))
		printf ("Jedna kruznica je sadrzana u drugoj.\n");
	else if (d>(r1+r2))
		printf("Kruznice se ne sijeku.\n");
	else if(fabs(d-(r1+r2))<0.0001){
		X=r2*(p1-p2)/(r1+r2)+p2;
		Y=r2*(q1-q2)/(r2+r1)+q2;
		printf ("Kruznice se dodiruju u tacki (%.2f,%.2f).\n", X, Y);
	}
	else if(fabs(abs(r1-r2)-d)<0.0001){
		X=r2*(p1-p2)/(r1-r2)+p2;
		Y=r2*(q1-q2)/(r2-r1)+q2;
		printf ("Kruznice se dodiruju u tacki (%.2f,%.2f).\n", X, Y);
	}
	else if (d<(r1+r2) && d>abs(r1-r2)){
    a=0.25*sqrt((d+r1+r2)*(d+r1-r2)*(d-r1+r2)*(r1+r2-d));
    X1=((p1+p2)/2)+((p2-p1)*((r1*r1-r2*r2))/(2*d*d))+((2*(q1-q2)*a)/(d*d));
	X2=((p1+p2)/2)+((p2-p1)*((r1*r1-r2*r2))/(2*d*d))-((2*(q1-q2)*a)/(d*d));
	Y1=((q1+q2)/2)+((q2-q1)*((r1*r1-r2*r2))/(2*d*d))-((2*(p1-p2)*a)/(d*d));
	Y2=((q1+q2)/2)+((q2-q1)*((r1*r1-r2*r2))/(2*d*d))+((2*(p1-p2)*a)/(d*d));
	printf ("Kruznice se sijeku u tackama (%.2f,%.2f) i (%.2f,%.2f).", X1, Y1, X2, Y2);
	}
	return 0;
}
