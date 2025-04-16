#include<iostream>
using namespace std;
int main()
{
    float n;
    cin>>n;

    float result = n - (int)n ;
    if(result==0) cout<<"int "<< result;
    if(result!=0) cout<<"float "<<int(n)<<" "<< ((int)n - n)*-1;

}