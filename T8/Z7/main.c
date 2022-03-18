#include <stdio.h>
void zamijeni(int* a, int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main() {
	int a=3;
	int b=5;
	zamijeni(a,b);
	printf("a=%d, b=%d",a,b);
	return 0;
}
