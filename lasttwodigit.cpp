#include <iostream>
using namespace std;
int main()
{
    unsigned long long a, b, c, d, last;
    cin >> a >> b >> c >> d;
    if (a == 1)
        a++;
    if (b == 1)
        b++;
    if (c == 1)
        c++;
    if (d == 1)
        d++;
    last = (a * b * c * d);
    cout << last%100;
}