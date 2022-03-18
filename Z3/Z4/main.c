#include <stdio.h>
#include <math.h>

int matrice_permutacija(double A[100][100], double B[100][100], double C[100][100], int M, int N)
{
    int i,j,brojac_a=0,brojac_b=0,brojac_c=0,min;
    double a_niz[10000]= {0},b_niz[10000]= {0},c_niz[10000]= {0};
    double temp;
    /*Ubacivanje prve matrice u niz*/
    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            a_niz[brojac_a]=A[i][j];
            brojac_a++;
        }
    }
    /*Sortiranje prvog niza*/

    for(i=0; i<M*N-1; i++) {
        min=i;
        for(j=i+1; j<M*N; j++) {
            if(a_niz[j]<a_niz[min])
                min=j;
        }
        temp=a_niz[i];
        a_niz[i]=a_niz[min];
        a_niz[min]=temp;
    }

    /*Ubacivanje druge matrice u niz*/
    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            b_niz[brojac_b]=B[i][j];
            brojac_b++;
        }
    }
    /*Sortiranje drugog niza*/
    for(i=0; i<M*N-1; i++) {
        min=i;
        for(j=i+1; j<M*N; j++) {
            if(b_niz[j]<b_niz[min])
                min=j;
        }
        temp=b_niz[i];
        b_niz[i]=b_niz[min];
        b_niz[min]=temp;
    }
    /*Ubacivanje trece matrice u niz*/
    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            c_niz[brojac_c]=C[i][j];
            brojac_c++;
        }
    }
    /*Sortiranje treceg niza*/
    for(i=0; i<M*N-1; i++) {
        min=i;
        for(j=i+1; j<M*N; j++) {
            if(c_niz[j]<c_niz[min])
                min=j;
        }
        temp=c_niz[i];
        c_niz[i]=c_niz[min];
        c_niz[min]=temp;
    }
    /*Uporedjivanje nizova*/

    for(i=0; i<M*N; i++) {
        if(fabs(a_niz[i]-b_niz[i])>0.00001)
            return 0;
        if(fabs(a_niz[i]-c_niz[i])>0.00001)
            return 0;
    }

    return 1;
}



int main()
{
    int i,j,M,N;
    int provjera;
    double A[100][100]= {0}, B[100][100]= {0}, C[100][100]= {0};
    printf("Unesite dimenzije matrice:\n");
    scanf("%d %d", &M, &N);
    printf("Unesite prvu matricu:\n");
    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            scanf("%lf", &A[i][j]);
        }
    }
    printf("Unesite drugu matricu:\n");
    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            scanf("%lf", &B[i][j]);
        }
    }
    printf("Unesite trecu matricu:\n");
    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            scanf("%lf", &C[i][j]);
        }
    }

    provjera=matrice_permutacija(A,B,C,M,N);
    if(provjera==1)
        printf("Matrice su identicne");
    else
        printf("Matrice nisu identicne");


    return 0;
}
