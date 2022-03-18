#include <stdio.h>

char* ukloni_komentare(char *s){
	char* pomocna1=s;
	char* pomocna2=s;
	char* p=s;
	while(*p!='\0'){
		// Za c++ stil//
		pomocna1=p;
		pomocna2=p;
		if(*p=='/' &&  *(p+1)=='/'){
			while(*pomocna1!='\n' && *pomocna1!='\0'){
				pomocna1++;
			}
			while(*pomocna2!='\0'){
				*pomocna2=*pomocna1;
				pomocna1++;
				pomocna2++;
			}
		}
		p++;	
	}
	p=s;
	pomocna1=s;
	pomocna2=s;
	
	
	
	return s;
}
int main(){
	return 0;
}