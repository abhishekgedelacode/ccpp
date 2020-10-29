#include<stdio.h>
#include<math.h>

int main() {
	float x1, x2, y1, y2;

	printf("enter x1, x2: ");
	scanf("%f %f", &x1, &x2);
	printf("enter y1, y2: ");
	scanf("%f %f", &y1, &y2);

	float dist;

	dist = ((x2-x1)*(x2-x2) + (y2-y1)*(y2-y1));

	printf("distance between given two points: %f\n", sqrt(dist));

	return 0;

}
