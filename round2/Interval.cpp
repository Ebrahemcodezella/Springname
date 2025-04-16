#include<iostream>
using namespace std;

void interval(double number)
{
    if(number > 0.0&& number <=25.0)
    {
        cout<<"Interval [0,25]";
    }
    else if(number > 25.0&& number <=50.0)
    {
        cout<<"Interval (25,50]";
    }
    else if (number > 50.0&& number <=75.0)
    {
        cout<<"Interval (50,75]";
    }
    else if(number >75.0 &&number <= 100.0){
        cout<<"Interval (75,100]";
    }
    else{
        cout<<"Out of Intervals";
    }
}
int main()
{

    double number;
    cin>>number;
    interval(number);
    return 0;
}