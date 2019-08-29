#include <stdio.h>

void PointerTest(int *a){
	*a=1;
}

void main(){
	int x=100;
	int *a=&x;
	PointerTest(a);
	printf("x=%d",x);
}
