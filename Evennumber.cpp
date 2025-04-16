#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    bool found=false;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {cout << i << endl;
        found=true;
        }
    }
    if(!found)
    {
        cout<<-1;
    }
}