#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(9);
    double area,R;
    cin>>R;
    area = R*R* 3.141592653;
    cout<<area;
}