#include <stdio.h>
#include <string.h>
int uporedi(const char *s1, const char *s2){
	if(strcmp(s1,s2)>0) return 1;
	if(strcmp(s1,s2)<0) return -1;
	if(strcmp(s1,s2)==0) return 0;
}
int main() {
	char string1[]="Emir";
	char string2[]="Emira";
	int pomocna;
	pomocna=uporedi(string1,string2);
	if(pomocna==1){
		printf("Prvi je veci od drugog");
	}
	else if(pomocna==-1){
		printf("Drugi je veci od prvog");
	}
	return 0;
}
