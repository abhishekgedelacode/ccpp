#include<stdio.h>

int main() {
	int num, sum =0;

	printf("enter five numbers: ");
	for(int i=0; i<5; i++) {
		scanf("%d", &num);
		if(num % 2 == 1) {
			sum += num;
		}
	}
	printf("sum of all numbers: %d\n", sum);

	return 0;
}
