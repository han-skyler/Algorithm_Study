#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		v.push_back(t);
	}

	int M = 0;
	int Y = 0;

	for (int i = 0; i < n; i++)
	{
		Y += ((v[i] / 30) + 1) * 10;
		M += ((v[i] / 60) + 1) * 15;
	}

	if (Y > M) {
		cout << "M " << M;
	}
	else if (M > Y) {
		cout << "Y " << Y;
	}
	else {
		cout << "Y M " << Y;
	}
}