#include<iostream>
using namespace std;
bool isprime(long num)
{
    if (num<=1) return false;
    if (num==2) return true;
    if(num%2==0)return false;
    for(long i =3 ;i*i<=num;i+=2)
    {
        if(num%i==0) return false;
    }
    return true;
}
int main()
{
    long x;
    cin>>x;
    if (isprime(x))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}