#include <stdio.h>

int main() {
	int sq[3]={0,};
	int money;

	scanf("%d %d %d", &sq[0], &sq[1], &sq[2]);

	int max;
	if (sq[0] == sq[1] && sq[1] == sq[2]) {
		money = 10000 + (sq[0] * 1000);
	}
	else if (sq[0] == sq[1]) {
		money = 1000 + (sq[0] * 100);
	}
	else if (sq[1] == sq[2]) {
		money = 1000 + (sq[1] * 100);
	}
	else if (sq[0] == sq[2]) {
		money = 1000 + (sq[2] * 100);
	}
	else {
		max = sq[0];
		for (int i = 0; i < 3; i++) {
			if (max <= sq[i]) {
				max = sq[i];
				money = max * 100;
			}
		}
	}

	printf("%d", money);

	return 0;
}