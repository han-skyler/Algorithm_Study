#include <iostream>
#include <stack>
#include <array>
#include <algorithm>
using namespace std;

int main() {
	array<int, 10> arr = { 0 };

	string s;
	cin >> s;

	stack<int> num;
	for (auto c : s) {
		arr[c - '0']++;
	}

	int size = arr[6] + arr[9] + 1;
	size = size / 2;

	arr[6] = size;
	arr[9] = 0;


	int max_val = *max_element(arr.begin(), arr.end());
	cout << max_val;
}