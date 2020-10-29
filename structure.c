#include<stdio.h>

void main() {
	struct emp {
		int id;
		float sal;
	};

	struct emp e;

	printf("\n enter id and sal: ");
        scanf("%d %f", &e.id, &e.sal);
	
	printf("your results: \n");
	printf("id: %d", e.id);
	printf("\nsal: %f", e.sal);	
}
