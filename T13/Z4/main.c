#include <stdio.h>
#include <stdlib.h> /* Zbog funkcije exit() */
#include <string.h>
 
struct Student {
    char prezime[20];
    char ime[15];
    int broj_bodova1;
    int broj_bodova2;
    int ukupno;
};
 
struct BinarniStudent {
    char prezime[20];
    char ime[15];
    int ukupno;
};
 
int main()
{
    struct Student studenti[3000], tmp;
    struct BinarniStudent tmpBin;
    FILE *ulaz, *izlaz;
    int i, j, vel;
    remove("usmeni.txt");
    if ((ulaz = fopen("ispit.txt","r")) == NULL) {
        printf("Greska pri otvaranju datoteke ispit.txt");
        return 1;
    }
 
    if ((izlaz = fopen("usmeni.dat","wb")) == NULL) {
        fclose(ulaz);
        printf("Greska pri otvaranju datoteke usmeni.txt");
        return 1;
    }
 
    i=0;
    while (fscanf(ulaz,"%20s%15s%2d %2d\n", studenti[i].prezime, studenti[i].ime, &studenti[i].broj_bodova1, &studenti[i].broj_bodova2) == 4 && i<300)
        i++;
    vel = i;
 
    for(i=0; i<vel; i++) {
        studenti[i].ukupno=studenti[i].broj_bodova1+studenti[i].broj_bodova2;
    }
    /* Sortiranje niza po broju bodova */
    for (i=0; i<vel; i++) {
        for (j=i+1; j<vel; j++) {
            if(studenti[j].ukupno>studenti[i].ukupno) {
                tmp = studenti[i];
                studenti[i] = studenti[j];
                studenti[j] = tmp;
            }
        }
    }
    
    // Upis niza u datoteku
    for (i=0; i<vel; i++)
        if(studenti[i].broj_bodova1>=10 && studenti[i].broj_bodova2>=10) {
            strcpy(tmpBin.ime,studenti[i].ime);
            strcpy(tmpBin.prezime,studenti[i].prezime);
            tmpBin.ukupno=studenti[i].ukupno;
            fwrite(&tmpBin,sizeof(tmpBin),1,izlaz);
 
        }
    printf ("Izlazna datoteka usmeni.dat je kreirana\n");
 
    fclose(ulaz);
    fclose(izlaz);
    return 0;
}