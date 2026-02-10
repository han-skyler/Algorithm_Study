#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	stack<pair<int, int>> t;
	vector<int> ans;
	ans.reserve(n);

	for (int i = 1; i <= n; i++)
	{
		int h;
		cin >> h;
		while (!t.empty() && t.top().second < h) t.pop();
		if (t.empty()) ans.push_back(0);
		else ans.push_back(t.top().first);
		
		t.push({ i,h });
	}

	for (auto a : ans)
	{
		cout << a << " ";
	}
	return 0;
}