#include <iostream>
using namespace std;

int main() {
    long long input;
    cin >> input;

    int year = input / 365;
    input %= 365;

    int month = input / 30;
    int day = input % 30;

    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days" << endl;

    return 0;
}
