#include<stdio.h>

int main() {
	int money, tthous, fhund, thund, hund, fifty, twenty, tens, five, two, one, temp;

	printf("enter money: ");
	scanf("%d", &money);

	tthous = money / 2000;
	temp = money % 2000;

	fhund = temp / 500;
	temp = temp % 500;

	thund = temp / 200;
	temp = temp % 200;

	hund = temp / 100;
	temp = temp % 100;

	fifty = temp / 50;
	temp = temp % 50;

	twenty = temp / 20;
	temp = temp % 20;

	tens = temp / 10;
	temp = temp % 10;

	five = temp / 5;
	temp = temp % 5;

	two = temp / 2;
	temp = temp % 2;

	one = temp;

	printf("2000 note(s): %d => RS.%d\n", tthous, tthous*2000);
	printf("500 note(s): %d => RS.%d\n", fhund, fhund*500);
	printf("200 note(s): %d => RS.%d\n", thund, thund*200);
	printf("100 note(s): %d => RS.%d\n", hund, hund*100);
	printf("50 note(s): %d => RS.%d\n", fifty, fifty*50);
	printf("20 note(s): %d => RS.%d\n", twenty, twenty*20);
	printf("10 note(s): %d => RS.%d\n", tens, tens*10);
	printf("5 note(s): %d => RS.%d\n", five, five*5);
	printf("2 note(s): %d => Rs.%d\n", two, two*2);
	printf("1 note(s): %d => RS.%d\n", one, one*1);

	return 0;
}
