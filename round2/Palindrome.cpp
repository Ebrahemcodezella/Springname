#include <iostream>
using namespace std;
// void Ebrahem_hany()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// }

void palin(int n)
{
    int res = 0;
    int x =n;
    while (n)
    {
        res = n % 10 + 10 * res;
        n /= 10;
    }
    cout << res << endl;
    if ((float)x/ (float)res == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    // Ebrahem_hany();
    long n;
    cin>>n;
    palin(n);
}