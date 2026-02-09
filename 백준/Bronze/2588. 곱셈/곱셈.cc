#include <stdio.h>

int main() {
	int a, b, c, i=0;
	scanf("%d %d", &a, &b);
	c = b;
	int save1,save2,save3;
	for (i = 0; i < sizeof(b); i++) {
		if (b >= 100) {
			save1 =(int)( b / 100);
			b -= save1 * 100;
		}
		else if (b >= 10) {
			save2 = (int)(b / 10);
			b -= save2 * 10;
		}
		else {
			save3 = b;
		}
	}

	printf("%d\n", a * save3);
	printf("%d\n", a * save2);
	printf("%d\n", a * save1);
	printf("%d", a * c);

	return 0;
}