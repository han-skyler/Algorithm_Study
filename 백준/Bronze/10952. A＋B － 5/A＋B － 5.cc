#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a, b;

	while (true) {	// 무한루프
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		cout << a + b<< endl;
	}
	
	return 0;
}