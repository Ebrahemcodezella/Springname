#include<iostream>
using namespace std;
int main()
{
    char X;
    cin>>X;
    if(X>='A'&&X<='Z')
    {
        cout<<char(X+32);
    }
    else if(X>='a'&&X<='z')
    { 
    cout<<char(X-32);
    }
    return 0;
}
