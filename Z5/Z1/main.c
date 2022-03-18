#include <stdio.h>
void unesi(char niz[], int velicina)
{
	char znak = getchar();
	if(znak=='\n')
		znak=getchar();
	int i=0;
	while(i<velicina-1 && znak!='\n') {
		niz[i]=znak;
		i++;
		znak=getchar();
	}
	niz[i]='\0';
}
struct Tim {
	char ime[50];
	int pobjede;
	int nerijesene;
	int porazi;
	int dati_golovi;
	int pr_golovi;
	int bodovi;
	int gol_razlika;
};
void nova_tabela(struct Tim timovi[], int velicina)
{
	int i=0, j=0, trazeni_index=0, bodovi1, bodovi2, max_golovi, pomocna, golovi;
	struct Tim pomocni_tim;
	// izbacivanje timova sa manje od 20 bodova, te usput racunanje gol razlike//
	for(i=0; i<velicina; i++) {
		timovi[i].bodovi=timovi[i].pobjede*3+ timovi[i].nerijesene;
		timovi[i].gol_razlika=timovi[i].dati_golovi-timovi[i].pr_golovi;
		if(timovi[i].bodovi<20) {
			for(j=i; j<velicina-1; j++) {
				timovi[j]=timovi[j+1];
			}
			velicina--;
			i--;
		}
	} //sortiranje niza tipa struct TIM//
	for(i=0; i<velicina; i++) {
		pomocna=i;
		for(j=i+1; j<velicina; j++) {
			bodovi1=timovi[j].pobjede*3+timovi[j].nerijesene;
			bodovi2=timovi[pomocna].pobjede*3+timovi[pomocna].nerijesene;
			if(bodovi1>bodovi2) {
				pomocna=j;
			}
		}
		pomocni_tim=timovi[i];
		timovi[i]=timovi[pomocna];
		timovi[pomocna]=pomocni_tim;

	}// trazenje najbolje gol razlike//
	max_golovi=timovi[0].gol_razlika;
	for(i=0; i<velicina; i++) {
		golovi=timovi[i].gol_razlika;
		if(golovi>max_golovi) {
			max_golovi=golovi;
			trazeni_index=i;
		}

	}
	printf("Najvecu gol razliku ima:\n%s\n", timovi[trazeni_index].ime);
	printf("Tabela nakon izbacivanja:\n");
	for(i=0; i<velicina; i++) {
		printf("%d. %s\n",i+1,timovi[i].ime);
	}
}

int main()
{
	struct Tim timovi[50];
	int broj_timova;
	int i;

	printf("Unesite broj timova: ");
	scanf("%d", &broj_timova);
	for(i=0; i<broj_timova; i++) {
		printf("Unesite naziv %d. tima: ", i+1);
		unesi(timovi[i].ime,50);
		printf("Broj pobjeda: ");
		scanf("%d", &timovi[i].pobjede);
		printf("Broj nerijesenih: ");
		scanf("%d", &timovi[i].nerijesene);
		printf("Broj poraza: ");
		scanf("%d", &timovi[i].porazi);
		printf("Broj datih golova: ");
		scanf("%d", &timovi[i].dati_golovi);
		printf("Broj primljenih golova: \n");
		scanf("%d", &timovi[i].pr_golovi);
	}
	nova_tabela(timovi,broj_timova);



	return 0;
}
