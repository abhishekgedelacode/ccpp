#include<stdio.h>

int main() {
	int a, b, c;

	printf("enter any three numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a>b && a>c) {
		printf("%d is bigger\n", a);
	} else if(b>c) {
		printf("%d is bigger\n", b);
	} else {
		printf("%d is bigger\n", c);
	}

	return 0;
}
