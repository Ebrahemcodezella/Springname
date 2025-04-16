#include <iostream>
using namespace std;
int main()
{
    long long n;
    long long  k, w;
    cin >> k >> n >> w;
    long long total=w * (w + 1) / 2;
    if ( k*total-n <=0 )
    {
        cout<<"0";
    }
    else
    {
        cout << k*total-n;
    }

    return 0;
}
