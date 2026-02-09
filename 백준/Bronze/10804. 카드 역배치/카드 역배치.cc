#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sorted(int a, int b) {
	return a < b;
}

int main() {
	vector<int> v(20);
	
	for (int i = 0; i < v.size(); i++)
	{
		v[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;

		if (n1 == n2) continue;
		if (n1 > n2) swap(n1, n2);

		reverse(v.begin() + n1-1, v.begin() + n2);
	}

	for (auto a : v)
	{
		cout << a << " ";
	}
}