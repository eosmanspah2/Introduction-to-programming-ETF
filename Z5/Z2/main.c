#include <stdio.h>
struct Planina {
	char naziv[51];
	int visina;
};
int ucitaj(struct Planina planine[1000], int broj_planina)
{
	char c;
	int visina=0;
	int i=0;
	int j=0;
	int k=0;

	FILE* ulaz=fopen("planine.txt", "r");
	if(ulaz==NULL) {
		printf("Otvaranje datoteke planine.txt nije uspjelo:");
		return 0;
	}
	do {
		c=fgetc(ulaz);
		if(c==EOF) {
			break;
		}
		if(c>='0' && c<='9') {
			visina=visina*10+(c-'0');
			planine[i].visina=visina;
		} else if((c<'0' || c>'9') && c!='\n') {
			if(j==0 && c==' ')
				continue;
			planine[i].naziv[j]=c;
			j++;
		} else if(c=='\n') {
			planine[i].naziv[j]='\0';
			i++;
			j=0;
			visina=0;
		}

	} while(!feof(ulaz));
	planine[i].naziv[j]='\0';
	for(k=0; k<i+1; k++) {
		char* s=planine[k].naziv;
		while(*s!='\0') {
			s++;
		}
		if(*(s-1)==' ') {
			*(s-1)='\0';
		}
	}


	return i+1;

}
void zapisi(struct Planina planine [], int broj_planina)
{
	FILE* ulaz=fopen("planine.dat", "wb");
	if (ulaz==NULL) {
		printf("Otvaranje datoteke planine.dat nije uspjelo:");
	}
	fwrite(planine, sizeof(struct Planina), broj_planina,ulaz);
	fclose(ulaz);
}
int trazimo_a(char* niz)
{
	while(*niz!='\0') {
		if(*niz=='a' || *niz=='A') {
			return 1;
		}
		niz++;
	}
	return 0;
}

void ispis(struct Planina planine [], int broj_planina)
{
	int i=0, max=0;
	for(i=0; i<broj_planina; i++) {
		//postavljamo max na prvu koja zadovoljava uslove//
		if(planine[i].visina<2000 && trazimo_a(planine[i].naziv)==1) {
			max=i;
			break;
		}
	}
	for(i=0; i<broj_planina; i++) {
		//trazimo najvecu//
		if(planine[i].visina<2000 && trazimo_a(planine[i].naziv)==1 && (planine[i].visina>planine[max].visina))
			max=i;
	}
	if(planine[max].visina<2000 && trazimo_a(planine[max].naziv)==1)
		printf("%s %d\n", planine[max].naziv, planine[max].visina);

}



int main()
{
	struct Planina planine[4] = {
		{"Maglic", 3337},
		{"Igman", 2002},
		{"Trebevic", 1000},
		{"Jahorina", 1800}
	};
	ispis(planine, 4);
	planine[0].visina = 1967;
	ispis(planine, 4);
	return 0;
}
