#include <iostream>

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;

	if (a > b) swap(a, b);

	long long cnt = b - a - 1;
	if (cnt < 0) cnt = 0;
	
	cout << cnt << "\n";
	for (long long i = a+1; i < b; i++)
	{
		cout << i << " ";
	}

}