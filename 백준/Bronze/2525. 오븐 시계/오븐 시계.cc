#include <stdio.h>

int main() {
	int h, m, ctime;

	scanf("%d %d %d", &h, &m, &ctime);
	
	m += ctime;

	while (m >= 60) {
		h++;
		m -= 60;
	}
	if (h >= 24) {
		h -= 24;
	}

	printf("%d %d", h, m);

	return 0;
}