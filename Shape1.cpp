#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = n; i >=0; --i)
    {
        for (int j = i-1; j >= 0; --j)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //for (int i = 0; i <= n; ++i)
    // {
    //     for (int j = i+1; j >=i ; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
}