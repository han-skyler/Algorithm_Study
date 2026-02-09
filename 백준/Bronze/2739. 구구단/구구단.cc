#include <stdio.h>

int main() {
	int n;
	int x;
	scanf("%d", &n);

	for (int i = 1; i < 10; i++) {
		x = n * i;
		printf("%d * %d = %d\n", n, i, x);
	}

	return 0;
}