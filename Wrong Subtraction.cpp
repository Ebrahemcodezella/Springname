#include<iostream>
using namespace std;
// int chekdigit(long n)
// {
//     int res=0;
// while(n>0)
// {
//     n/=10;
//     res++;
// }
//     return res;
// }
int subtraction(long n ,int k)
{
    int sub=0;
    int res=0;
    while(k>0)
    {
        if(n%10==0)
        {
            n/=10;
            res=n;
        }
        else if(n%10!=0)
        {
            n--;
            res=n;
        }
        k--;
    }
    return res;
}
int main()
{
    long n;
    int k;
    cin>>n>>k;
    cout<<subtraction(n,k);
}