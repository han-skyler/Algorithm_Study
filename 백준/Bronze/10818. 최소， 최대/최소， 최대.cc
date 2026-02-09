#include <iostream>

using namespace std;

#define nd 1000000

int a[nd];

int main(int argc, char const* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, min, max;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	min = a[0];
	max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}

	cout << min << " " << max;

	return 0;
}