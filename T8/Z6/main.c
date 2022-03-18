#include <stdio.h>
void sortiraj(double* pokazivac, int velicina){
	int i,j;
	double temp;
	for(i=0;i<velicina;i++){
		for(j=i+1; j<velicina; j++){
			if(*(pokazivac+i)>*(pokazivac+j)){
				temp=*(pokazivac+i);
				*(pokazivac+i)=*(pokazivac+j);
				*(pokazivac+j)=temp;
			}
		}
	}
}

int main() {
	printf("Tutorijal 8, Zadatak 6");
	return 0;
}
