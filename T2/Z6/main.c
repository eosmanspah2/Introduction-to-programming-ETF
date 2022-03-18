#include <stdio.h>
#include <math.h>
int main() {
	printf("Unesite brojeve a,b,c,d: ");
	float a,b,c,d;
	scanf("%g %g %g %g", &a,&b,&c,&d);
	if((a<c && b<d && c<b) || (a==c && c<b && b<d) || (a<c && c==b && b<d) || (a<c && c<b && b==d)){
		printf ("Rezultantni interval je [%g,%g].", c,b);
	}
	else if(c<a && d<b && a<d || c==a && b<c && d<b || c<=a && c==b && d<b || c<a && b<c && b==d){
		printf ("Rezultantni interval je [%g,%g].", a,d);
	}
	else if(a==b && b==c && c==d){
		printf("Oba skupa su ista");
	}
	else if(c>a && b>d){ 
		printf("Rezultantni interval je [%g,%g].",c,d);
	}
	else if(a>c && d>b){ 
		printf("Rezultantni interval je [%g,%g].",a,b);
	}
	else{
		printf("Skupovi se ne sijeku.");
	}
	return 0;
}
