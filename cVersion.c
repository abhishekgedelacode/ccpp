#include<stdio.h>

int main(int argc, char** argv) {
	#if __STDC_VERSION__ >= 201710L
		printf("c18!\n");
	#elif  __STDC_VERSION__ >= 201112L
		printf("c11!\n");
	#elif __STDC_VERSION__ >= 199901L
		printf("c99!\n");
	#else 
		printf("c89!\n");
	#endif
		return 0;
}
