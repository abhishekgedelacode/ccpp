#include<stdio.h>

int main() {
	int num;

	printf("enter any number: ");
	scanf("%d", &num);

	if(num > 0) {
		printf("%d is postive number\n", num);
	} else if(num < 0) {
		printf("%d is negative number\n", num);
	} else {
		printf("it is zero\n");
	}

	return 0;
}
