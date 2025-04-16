#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long max=0;
        long current;
    for (long i = 0; i < n; i++)
    {
        cin>>current;
        if (current>max)
        {
            max=current;
        }
    }
    cout<<max;
    // int x;
    // cin>>x;
    // int n[1000] ;
    // for (int i = 0; i < x; i++)
    // {
    //     cin>>n[i];
    // }
    // int max=n[0];
    // for (long i = 0; i < n[x]; i++)
    // {
    //     if(n[i]>n[0])
    //     {
    //     max=n[i];
    //     }
    // }
    // cout<<max;
    // bool stat=true 
    // int x;
    //     while(stat)
    // {
    //     cin>>n[x];
    // while ()
    // {
    //     /* code */
    // }
    
    // }
    
}