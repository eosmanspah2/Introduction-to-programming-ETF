#include <stdio.h>
#include <math.h>
#define k 0.0001
int main() {
	double i,a,b,h,d,c=1,s=0;
	int n,j,br=0;
	printf("Unesite prvu tacku intervala: ");
	scanf("%lf", &a);
	printf("Unesite drugu tacku intervala: ");
	scanf("%lf", &b);
	if(a<k || a<0)
		{
		printf("Nedozvoljena vrijednost!");
		return 0;
		} 
		
	if(b<k || b<0)
		{
		printf("Nedozvoljena vrijednost!");
		return 0;
		} 
	
	if(fabs(b-a)>100 || fabs(b-a)<1)
	{
		printf("Neispravan interval!");
		return 0;
	}
	
printf("Unesite eksponent:");
	scanf("%d", &n);
	
 if(n<-10 || n>10)
	{
		printf("Neispravan eksponent!");
	}
	
	printf("Unesite korak diskretizacije: ");
	scanf("%lf", &h);
	printf(" Korak    x            y = f(x)  ");
	printf("-----------------------------------");
	for(i=a;i<b;i+=h)
	{   c=1;
	    br++;
		for(j=1;j<n+1;j++)
		{
			c*=i;
		}
	 d=h*c;
	 s+=d;
	 if(br<5)
	 {
	 	printf("     %d.%.6f              %.5f\n",br,i,c);
	 }
	}
printf("(...)\n");
printf("     %d.%.6f              %.5f\n",br,i,c);
printf("-------------------------------");
printf("P(x^%d)[%.f,%.f]=%.6f (dx=%f)",n,a,s,d,h);
	
	

	return 0;
}
