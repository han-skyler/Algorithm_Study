#include <iostream>
#include <array>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		array<int, 26> v1{}, v2{};
		string s1, s2;
		
		cin >> s1 >> s2;
		for (auto a : s1) v1[a - 'a']++;
		for (auto a : s2) v2[a - 'a']++;

		cout << (v1 == v2 ? "Possible\n" : "Impossible\n");
	}
}