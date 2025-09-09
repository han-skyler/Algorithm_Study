#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int save = a / 4; 
    for (int i = 0; i < save; i++) {
        cout << "long ";
    }
    cout << "int" << endl;

    return 0;
}
