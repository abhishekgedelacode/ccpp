#include<stdio.h>

int main() {
	float a, b, c;

	printf("enter three sides of the trianlge: ");
	scanf("%f %f %f", &a, &b, &c);

	if(a+b>c && b+c>a && c+a>b) {
		printf("perimeter of the given triangle: %f\n", a+b+c);
	} else {
		printf("triangle not possible with these sides\n");
	}

	return 0;
}
