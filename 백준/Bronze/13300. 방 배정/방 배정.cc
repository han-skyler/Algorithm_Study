#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> f(6);
	vector<int> m(6);

	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int s, g;
		cin >> s >> g;
		g -= 1;
		if (s) {
			m[g]++;
		}
		else {
			f[g]++;
		}
	}

	int room = 0;
	for (int i = 0; i < 6; i++)
	{
		if (f[i] > 0) {
			do {
				room++;
				f[i] -= k;
			} while (f[i] > 0);
		}
		if (m[i] > 0) {
			do {
				room++;
				m[i] -= k;
			} while (m[i] > 0);
		}
	}

	cout << room;
}