#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num[3];
	int tmp[2];
	cin >> num[0];
	int ten, one;

	int i = 0;

	if (num[0] >= 10) {
		ten = num[0] / 10;
		one = num[0] - (ten * 10);
		num[1] = ten;
		num[2] = one;
	}

	else {
		num[1] = 0;
		num[2] = num[0];
	}

	int temp;

	while (true) {
		temp = num[1] + num[2];
		if (temp < 10) {
			tmp[0] = 0;
			tmp[1] = temp;

			num[1] = num[2];
			num[2] = tmp[1];
		}
		else {
			tmp[0] = temp / 10;
			tmp[1] = temp - tmp[0] * 10;

			num[1] = num[2];
			num[2] = tmp[1];
		}

		i++;

		temp = num[1] * 10 + num[2];
		if (temp == num[0]) {
			cout << i;
			break;
		}
	}

	return 0;
}