#include <stdio.h>
#include <string.h>
int uporedi(const char *s1, const char *s2){
	if(strcmp(s1,s2)>0) return 1;
	if(strcmp(s1,s2)<0) return -1;
	if(strcmp(s1,s2)==0) return 0;
}
int strcmpi(const char *s1, const char *s2, int velikamala){
	char pomocna1, pomocna2;
	if(velikamala==1){
		uporedi(s1,s2);
	}
	else{
		while(*s1!='\0' && *s2!='\0'){
			pomocna1=*s1;
			pomocna2=*s2;
			if(pomocna1>='A' && pomocna1<='Z'){
				pomocna1+=32;	
			}
			if(pomocna2>='A' && pomocna2<='Z'){
				pomocna2+=32;	
			}
			if(pomocna1>pomocna2) return 1;
			if(pomocna1<pomocna2) return -1;
			s1++;
			s2++;
	}
	
	if(*s1!='\0') return 1;
	if(*s2!='\0') return -1;
	else return 0;	
	}
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
