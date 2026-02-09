#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	
	queue<int> q;
	for (int i = 1; i <= n; i++) q.push(i);

	vector<int> result;
	while (!q.empty()) {
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		result.push_back(q.front());
		q.pop();
	}

	cout << '<';
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
		if (i != result.size() - 1) {
			cout << ", ";
		}
	}
	cout << ">";

}