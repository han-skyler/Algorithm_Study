#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int r[2] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int a;
			cin >> a;
			r[a]++;
		}
		switch (r[0])
		{
		case 0:
			cout << "E\n";
			break;
		case 1:
			cout << "A\n";
			break;
		case 2:
			cout << "B\n";
			break;
		case 3:
			cout << "C\n";
			break;
		case 4:
			cout << "D\n";
			break;
		}
		r[0] = 0;
		r[1] = 0;
	}
}