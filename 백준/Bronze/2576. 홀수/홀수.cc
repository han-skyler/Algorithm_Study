#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v;
	int sum = 0;
	for (int i = 0; i < 7; i++)
	{
		int a;
		cin >> a;
		if (a % 2 != 0) {
			v.push_back(a);
			sum += a;
		}
	}

	sort(v.begin(), v.end());

	if (v.empty()) {
		cout << -1;
	}
	else {
		cout << sum << "\n";
		cout << v.front();
	}
}