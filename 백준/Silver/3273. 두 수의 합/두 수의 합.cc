#include <iostream>
#include <stack>
#include <array>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int r;
	cin >> r;

	sort(v.begin(), v.end());

	int s = 0;
	int l = n - 1;
	int cnt = 0;

	while (s < l) {
		int sum = v[s] + v[l];

		if (sum == r) {
			cnt++;
			s++;
			l--;
		}
		else if (sum < r) {
			s++;
		}
		else {
			l--;
		}
	}
	cout << cnt;
}