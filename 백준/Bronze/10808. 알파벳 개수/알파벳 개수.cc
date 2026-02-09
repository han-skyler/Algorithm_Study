#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input;
    cin >> input;

    vector<int> v(26, 0);

    for (int i = 0; i < (int)input.length(); i++) {
        int tmp = input[i] - 'a';
        v[tmp]++;
    }

    for (int i = 0; i < 26; i++) {
        cout << v[i] << " ";
    }
}
