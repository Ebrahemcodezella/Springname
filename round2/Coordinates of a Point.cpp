#include <iostream>
using namespace std;
string orederpair(double oreder1, double order2)
{
    if (oreder1 > 0 && order2 > 0)
    {
        return "Q1";
    }
    else if (oreder1 ==0 &&order2==0)
    {
        return "Origem";
    }
    else if (order2 ==0&&(oreder1 > 0 ||oreder1< 0 ))
    {
        return "Eixo X";
    }
    else if (oreder1 ==0&&(order2 > 0 ||order2< 0 ))
    {
        return "Eixo Y";
    }
    else if (oreder1 < 0 && order2 > 0)
    {
        return "Q2";
    }
    else if (oreder1 < 0 && order2 < 0)
    {
        return "Q3";
    }
    else
    {
        return "Q4";
    }
}

int main()
{
    double o1,o2;
cin>>o1>>o2;
    cout<<orederpair(o1,o2);
}