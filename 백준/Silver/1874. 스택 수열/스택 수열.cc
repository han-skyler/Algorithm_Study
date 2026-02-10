#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	stack<int> s;
	vector<string> ans;
	s.push(0);
	int idx = 1;
	for (int i = 0; i < n; i++)
	{
		int target;
		cin >> target;

		bool stop = false;
		while (!stop) {
			if (s.top() == target) {
				ans.push_back("-");
				s.pop();
				stop = true;
			}
			else {
				if (s.top() > target) {
					cout << "NO\n";
					return 0;
				}
				else {
					s.push(idx);
					idx++;
					ans.push_back("+");
				}
			}
		}
	}

	for (auto a : ans) cout << a << "\n";
}