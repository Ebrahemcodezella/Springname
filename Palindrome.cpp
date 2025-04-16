#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int N;
    cin >> N;

    int reversed = 0;
    int temp = N;

    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    cout << reversed << endl;

    if (isPalindrome(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
