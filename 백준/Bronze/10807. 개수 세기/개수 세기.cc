#include <iostream>

using namespace std;

#define nd 100

int a[nd];

int main(int argc, char const* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int b;
	cin >> b;

	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == b) {
			count++;
		}
	}
	cout << count;

	return 0;
}