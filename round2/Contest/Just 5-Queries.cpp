#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < 5; i++) {
        char op;
        int x;
        cin >> op >> x;

        if (op == '+') {
            n += x;
        } else if (op == '-') {
            n -= x;
        } else if (op == '*') {
            n *= x;
        }
    }

    cout << n << endl;
}
