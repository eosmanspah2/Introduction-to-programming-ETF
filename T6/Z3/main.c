#include <stdio.h>
int main(){
    int A[10],B[10],C[20],i,a,b,brojac_a=0,brojac_b=0;
    printf("Unesite elemente niza A: ");
    for(i=0; i<10; i++) {
        scanf("%d", &a);
        if(a==-1) {
            break;
        }
        A[i]=a;
        C[i]=a;
        brojac_a++;
    }
    printf("Unesite elemente niza B: ");
    for(i=0; i<10; i++) {
        scanf("%d", &b);
        if(b==-1)
            break;
        B[i]=b;
        C[brojac_a+i]=b;
        brojac_b++;
    }
    printf("Niz C glasi: "){
    for(i=0; i<brojac_a+brojac_b; i++) {
        printf("%d", C[i]);
        if(i != brojac_a + brojac_b -1) printf(",");
    }
    return 0;
}
