#include<iostream>
using namespace std;
int isequal(int limak,int bob)
{
    int res=0;
    if(limak==bob)
    {
        return res= 1;
    }
    else{
        while(limak<=bob)
        {
            res++;
            limak*=3;
            bob*=2;
        }
    }
    return res;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<isequal(a,b)<<endl;
}