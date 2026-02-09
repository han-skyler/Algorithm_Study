#include <stdio.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	if (m - 45 < 0) {
		m += 15;
		h = h - 1;
		if (h < 0) {
			h = 23;
		}
	}
	else {
		m -= 45;
	}
	printf("%d %d", h, m);
	return 0;
}