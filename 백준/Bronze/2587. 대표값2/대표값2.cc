#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
	array<int, 5> a;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	cout << sum / 5 << "\n";
	sort(a.begin(), a.end());
	cout << a[2];
}