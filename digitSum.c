#include<stdio.h>

int main() {
	int num, rem, sum =0;

	printf("enter any number: ");
	scanf("%d", &num);

	while(num > 0) {
		rem = num % 10;
		sum += rem;
		num /= 10;
	}

	printf("sum off the digits of the given number is: %d\n", sum);

	return 0;
}
