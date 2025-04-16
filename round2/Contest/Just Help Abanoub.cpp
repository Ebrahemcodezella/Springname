#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double x1=pow(a,b);
    double x2 =pow(b,a);
    if (x1== c||x2==c)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}