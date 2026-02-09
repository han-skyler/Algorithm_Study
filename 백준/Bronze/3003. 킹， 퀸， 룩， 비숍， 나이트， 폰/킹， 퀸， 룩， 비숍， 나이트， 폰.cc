#include <stdio.h>

int main() {
	int chess[6] = { 1, 1, 2, 2, 2, 8 };
	int less = 0;

	for (int i = 0; i < 6; i++) {
		scanf("%d", &less);
		printf("%d ", chess[i] - less);
	}

	return 0;
}