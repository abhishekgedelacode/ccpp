#include<stdio.h>

int main() {
	int num, years, weeks, days;

	printf("enter number of days: ");
	scanf("%d", &num);

	int temp;

	years = num / 365;
	temp = num % 365;
	weeks = temp / 7;
	temp = temp % 7;
	days = temp;

	printf("years: %d\n", years);
	printf("weeks: %d\n", weeks);
	printf("days: %d\n", days);

	return 0;
}
