#include <iostream>

using namespace std;

#define nd 10000

int a[nd];

int main(int argc, char const* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, x, a[nd];

	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (x > a[i]) {
			cout << a[i] << " ";
		}
	}

	return 0;
}