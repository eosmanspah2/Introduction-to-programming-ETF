#include <stdio.h>
 
void unesi(char niz[], int velicina) {
    char znak = getchar();
    if (znak == '\n') znak = getchar();
    int i = 0;
    while(i < velicina - 1 && znak != '\n') {
        niz[i] = znak;
        i++;
        znak = getchar();
    }
    niz[i]='\0';
}
 
struct Student {
    char ime[15], prezime[20];
    int broj_bodova1, broj_bodova2;
};
 
int main()
{
    int i=0, key=1, j, k;
    while (key) {
        printf("Unesite 1 za unos, 2 za ispis, 0 za izlaz: ");
        scanf("%d", &key);
        if (key == 1) {
            FILE* izlaz = fopen("ispit.txt", "a");
            struct Student s;
            printf("Unesite ime: ");
            unesi(s.ime, 15);
            printf("Unesite prezime: ");
            unesi(s.prezime, 20);
            printf("Unesite broj bodova na I parcijalnom: ");
            scanf("%d", &s.broj_bodova1);
            printf("Unesite broj bodova na II parcijalnom: ");
            scanf("%d", &s.broj_bodova2);
            fprintf(izlaz, "%-20s%-15s%2d%3d\n", s.prezime, s.ime, s.broj_bodova1, s.broj_bodova2);
            fclose(izlaz);
            i++;
        }
        if (key == 2) {
            FILE* ispis = fopen("ispit.txt", "r");
            struct Student studenti[300];
            k = 0;
            j = 0;
            while (j<300 && fscanf(ispis,"%20s%15s%2d%2d\n", studenti[j].prezime, studenti[j].ime, &studenti[j].broj_bodova1, &studenti[j].broj_bodova2) == 4)
                j++;
            while (k != j) {
                printf("\n%d. %s %s - %d, %d\n", k+1, studenti[k].ime, studenti[k].prezime, studenti[k].broj_bodova1, studenti[k].broj_bodova2);
                k++;
            }
            fclose(ispis);
        }
    }
    return 0;
}