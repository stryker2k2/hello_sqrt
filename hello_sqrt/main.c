#include <stdio.h>
#include <string.h>
#include <math.h>

int square(int a);


int main() {
	printf("Hello, World!\n");

	int a = 10;
	char x[] = { "This is a string" };
	int sqNum = 0;

	for (int i = 0; i < a; i++) {
		printf("%d\n", i);
	}

	for (int i = 0; i <= strlen(x); i++) {
		printf("%c", x[i]);
	}
	printf("\n");

	printf("===========\n");
	printf("Enter a number that you'd like to find the sqrt of:");
	scanf_s("%d", &sqNum);
	printf("The square root of %d is %d\n", sqNum, square(sqNum));

	return 0;
}


int square(int a) {
	return sqrt(a);
}