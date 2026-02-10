#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int> q;
	
	while (n--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int c;
			cin >> c;
			q.push(c);
		}
		else if (cmd == "pop") {
			if (q.empty()) {
				cout << "-1\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (cmd == "size") {
			cout << q.size() << "\n";
		}
		else if (cmd == "empty") {
			if (q.empty()) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (cmd == "front") {
			if (q.empty()) cout << "-1\n";
			else cout << q.front() << "\n";
		}
		else if (cmd == "back") {
			if (q.empty()) cout << "-1\n";
			else cout << q.back() << "\n";
		}
	}

	return 0;
}