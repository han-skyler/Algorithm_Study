#include <iostream>

using namespace std;

#define nd 10

int a[nd];

int main(int argc, char const* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int max = 0, num = 0;

	for (int i = 0; i < nd; i++) {
		cin >> a[i];
		if (a[i] > max) {
			max = a[i];
			num = i + 1;
		}
	}

	cout << max << "\n" << num;
	
	return 0;
}