#include <iostream>
#include <array>
#include <string>

using namespace std;

int main() {
	array<int, 26> v1{}, v2{};
	string s1, s2;

	cin >> s1 >> s2;

	for (auto a : s1) v1[a - 'a']++;
	for (auto a : s2) v2[a - 'a']++;

	int rmv = 0;
	for (int i = 0; i < 26; i++)
	{
		if (v1[i] > 0 && v2[i] > 0) {
			// 둘 다 쓰고 갯수가 같을때
			if (v1[i] == v2[i]) {
				continue;
			}
			// 둘 다 쓰긴 쓰는데 갯수가 다를때
			else {
				if (v1[i] > v2[i]) swap(v1[i], v2[i]);
				rmv += v2[i] - v1[i];
			}
		}
		else {
			rmv = rmv + v1[i] + v2[i];
		}
	}

	cout << rmv;
}