#include<stdio.h>

void main(){
	int a = 5;
	int *b;

	b = &a;

	printf("value of a = %d\n", a);
	printf("value of a = %d\n", *(&a));
	printf("value of a = %d\n", *b);
        printf("add of a = %d\n", &a);
	printf("add of a = %d\n", b);
	printf("add of b = %d\n", &b);
	printf("value of b = add of a = %d", b);
	
}
