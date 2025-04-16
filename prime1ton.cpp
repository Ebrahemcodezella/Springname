#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimes(int N)
{
    for (int i = 2; i <= N; ++i)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int centuryFromYear(int year)
{
    int result = 0;
    if (year / 10 == year)//
    {
        result = year;
    }
    else if (year / 100 == year - 1)
    {
        result = year / 100 + 1;
    }
    else{
        result = year;
    }
    return result;
}

int main()
{
    // int N;
    // cin >> N;

    // printPrimes(N);
cout<<centuryFromYear(2000);
    // return 0;
}
