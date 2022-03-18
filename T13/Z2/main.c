#include <stdio.h>
 
struct Student{
    char ime[15], prezime[20];
    int broj_bodova1, broj_bodova2;
};
 
int main() {
    struct Student studenti[300], tmp;
    FILE *ulaz, *izlaz, *izlaz2;
    int i, j, vel, max;
 
    /* Otvaranje datoteka */
    if ((ulaz = fopen("ispit.txt","r")) == NULL) {
        printf("Greska pri otvaranju datoteke ispit.txt");
        return 1;
    }
 
    if ((izlaz = fopen("ispit_sortiran.txt","w")) == NULL) {
        fclose(ulaz);
        printf("Greska pri otvaranju datoteke ispit_sortiran.txt");
        return 1;
    }
    
    if ((izlaz2 = fopen("usmeni.txt","w")) == NULL) {
        fclose(ulaz);
        fclose(izlaz);
        printf("Greska pri otvaranju datoteke usmeni.txt");
        return 1;
    }
 
    /* Ucitavanje datoteke u niz studenti */
    i=0;
    while (i<300 && fscanf(ulaz,"%20s%15s%2d%2d\n", studenti[i].prezime, studenti[i].ime, &studenti[i].broj_bodova1, &studenti[i].broj_bodova2) == 4)
        i++;
    vel = i;
 
    /* Sortiranje niza po broju bodova */
    for (i=0; i<vel; i++) {
        max = i;
        for (j=i+1; j<vel; j++)
            if(studenti[j].broj_bodova1 > studenti[max].broj_bodova1) 
                max = j;
 
        tmp = studenti[i];
        studenti[i] = studenti[max];
        studenti[max] = tmp;
    }
 
    // Upis niza u datoteku
    for (i=0; i<vel; i++)
        fprintf(izlaz,"%-20s%-15s%2d%2d\n", studenti[i].prezime, studenti[i].ime, studenti[i].broj_bodova1, studenti[i].broj_bodova2);
    
    for (i=0; i<vel; i++) {
        max = i;
        for (j=i; j<vel; j++) {
            if (studenti[j].broj_bodova1 + studenti[j].broj_bodova2 > studenti[max].broj_bodova1 + studenti[max].broj_bodova2) max = j;
        }
        tmp = studenti[i];
        studenti[i] = studenti[max];
        studenti[max] = tmp;
    } 
    
    for (i=0; i<vel; i++) {
        if (studenti[i].broj_bodova1 >= 10 && studenti[i].broj_bodova2 >= 10) {
            fprintf(izlaz2, "%-15s%-10s%2d\n", studenti[i].prezime, studenti[i].ime, studenti[i].broj_bodova1 + studenti[i].broj_bodova2);
        }
    }
    
    printf ("Izlazna datoteka usmeni.txt je kreirana\n");
    
    fclose(ulaz);
    fclose(izlaz);
    fclose(izlaz2);
    return 0;
}

