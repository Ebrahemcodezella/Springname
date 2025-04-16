#include<iostream>
using namespace std;
string rec(int n)
{
    if (n==0)
    return "";

    cout<<"I love Recursion"<<endl;
    return (rec(n-1));
}

int main()
{
    int n=0;
    cin>>n;
    cout<<rec(n);
}