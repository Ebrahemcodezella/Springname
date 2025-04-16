#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count1 = 0, count2 = 0, count3 = 0;

    for (char c : s) {
        if (c == '1') count1++;
        else if (c == '2') count2++;
        else if (c == '3') count3++;
    }

    bool first = true;
    for (int i = 0; i < count1; i++) {
        if (!first) cout << "+";
        cout << "1";
        first = false;
    }
    for (int i = 0; i < count2; i++) {
        if (!first) cout << "+";
        cout << "2";
        first = false;
    }
    for (int i = 0; i < count3; i++) {
        if (!first) cout << "+";
        cout << "3";
        first = false;
    }

    return 0;
}
