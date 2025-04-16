#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x1,y1;
    cin>>x1>>y1;
    float result= sqrt(pow(x1,2)+pow(y1,2));
    if(result-(int)result==0) cout<<"YES";
    else cout<<"NO";

}