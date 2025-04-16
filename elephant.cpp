#include<iostream>
using namespace std;
int main()
{
    int x =0;
    cin>>x;
    int result=x/5;
    if(x%5!=0)
    {
        cout<<result+1;
    }
    else
    {
        cout<<result;
    }

}