#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long a, b, c;
	cin >> a >> b >> c;

	long long mul = a * b * c;

	vector<int> v(10);
	
	while (mul) {
		int t = mul % 10;
		v[t]++;
		mul /= 10;
	}
	
	for (auto a : v)
	{
		cout << a << "\n";
	}
}