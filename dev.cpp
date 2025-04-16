#include <iostream>
using namespace std;
char Uniqe_char(string s)
{
    char res = ' ';
    for (char c : s)
    {
        res ^= c;
    }
    return res;
}

void sumtion(double dl)
{
    for (int i = 1; i <1000 ; i+=1/3.71)
    {
        dl+=i;
    }
    cout<<dl;
}
int main()
{

    sumtion(12);
    return 0;
}