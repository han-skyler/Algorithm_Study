#include <iostream>
#include <stack>
using namespace std;

int main() {
	string s;
	cin >> s;

	stack<char> left, right;

	for (auto c : s) {
		left.push(c);
	}

	int n;
	cin >> n;

	while (n--) {
		char cmd;
		cin >> cmd;
		switch (cmd)
		{
		case 'L':
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
			break;
		case 'D':
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
			break;
		case 'B':
			if (!left.empty()) {
				left.pop();
			}
			break;
		case 'P':
			char x;
			cin >> x;
			left.push(x);
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
}