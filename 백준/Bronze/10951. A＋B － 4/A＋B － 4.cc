#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a, b;
	while (cin >> a >> b) {	// 무한루프
		cout << a + b<< endl;
	}
	
	return 0;
}