#include<stdio.h>

int main() {
	int a, b;
	int result;

	scanf("%d %d", &a, &b);

	result = a + b;
	printf("%d\n", result);

	result = a - b;
	printf("%d\n", result);

	result = a * b;
	printf("%d\n", result);

	result = a / b;
	printf("%d\n", result);

	result = a % b;
	printf("%d\n", result);

	return 0;
}