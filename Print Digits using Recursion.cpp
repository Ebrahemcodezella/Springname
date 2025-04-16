#include <iostream>
using namespace std;
void digit(int n)
{

    int count = 0;
    count = n % 10 - count * 10;

    int v = 0;
    if ((count == n && v == 1) || count < 1)
        return;

    v++;
    cout << count << " ";
    return digit(n / 10);
}
int power(int base, int exponent)
{
    if (exponent == 1)
    {
        return base;
    }
    int result=1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}
int main()
{
    cout<<power(8,4);
}