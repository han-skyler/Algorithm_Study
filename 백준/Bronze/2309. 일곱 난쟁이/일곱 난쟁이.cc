#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> arr(9);

	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	int a = -1, b = -1;
	for (int i = 0; i < 9; i++)
	{
		for (int j = i+1; j < 9; j++)
		{
			int h = sum - arr[i] - arr[j];
			if (h == 100) {
				a = i;
				b = j;
				break;
			}
		}
		if (a != -1) break;
	}

	vector<int> ans;
	for (int i = 0; i < 9; i++)
	{
		if (i == a || i == b) continue;
		ans.push_back(arr[i]);
	}

	sort(ans.begin(), ans.end());

	for (auto a : ans)
	{
		cout << a << "\n";
	}
}