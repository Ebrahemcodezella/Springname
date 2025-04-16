#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b;
    vector<int> res;
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            res.push_back(i);
        }
    }
    cout<<res.back();

}