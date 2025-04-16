#include <iostream>
using namespace std;

void fib(int x)
{
    if (x <= 0) {
        return;
    }
    
    if (x >= 1) {
        cout << 0 << " ";
    }
    
    if (x >= 2) {
        cout << 1 << " ";
    }
    
    int val1 = 0, val2 = 1;
    
    for (int i = 3; i <= x; ++i) {
        int nextVal = val1 + val2;
        cout << nextVal << " ";
        val1 = val2;
        val2 = nextVal;
    }
}

int main()
{
    int n;
    
    cin >> n;
    fib(n);
    cout << endl;
    return 0;
}