#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a, b, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << endl;
	}


	return 0;
}