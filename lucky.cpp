#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for (int i = a; i <=b; i++)
    {
        while(i>0)
        {
            int digit=i%10;
            if(digit!=4&&digit!=7)
            {return false;}
            cout<<i;
            
        }
    }
    
}