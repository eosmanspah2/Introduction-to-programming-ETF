#include <stdio.h>
int main() {
int a=0,b=0,c=0,x;
printf("Unesite brojeve:\n");
do{
scanf("%d", &x);
    if(x%5==0)
        a++;
    if(x%7==0)
        b++;
    if(x%11==0)
        c++;
}while(x!=-1);
printf("Djeljivih sa 5: %d\n", a);
printf("Djeljivih sa 7: %d\n", b);
printf("Djeljivih sa 11: %d", c);
return 0;
}
