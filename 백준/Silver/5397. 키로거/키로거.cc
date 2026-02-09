#include <iostream>
#include <stack>
#include <array>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	while (n--) {
		stack<char> left, right;
		string input;
		cin >> input;
		for (auto c : input)
		{
			switch (c)
			{
			case '<':
				if (!left.empty()) {
					right.push(left.top());
					left.pop();
				}
				break;
			case '>':
				if (!right.empty()) {
					left.push(right.top());
					right.pop();
				}
				break;
			case '-':
				if (!left.empty()) {
					left.pop();
				}
				break;
			default:
				left.push(c);
				break;
			}
		}

		while (!left.empty()) {
			right.push(left.top());
			left.pop();
		}

		while (!right.empty()) {
			cout << right.top();
			right.pop();
		}

		cout << "\n";
	}

}