#include <iostream>
using namespace std;
int main()
{
    long  r1, l1, r2, l2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (r1 == l2)
    {
        cout << r1;
    }
    else if (r1 > l2 )
    {
        cout << l2 << " " << r1;
    }
    else
    {
        cout << -1;
    }
}