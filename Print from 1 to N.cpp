#include <iostream>
using namespace std;
int re = 0;
int print(int n)
{
    int res = n - 1;
    int x = n - res;
    if (res < 0)
        return 0;
    cout << re + x << endl;
    re++;
    return print(n - 1);
}
void printNumbers(int n)
{
    if (n > 0)
    {
        printNumbers(n - 1);
        cout << n << endl;
    }
}
int printk(int n)
{

    if (n < 2)
        return 1;
    
    cout<<n<<" ";
        return printk(n - 1);
}
int main()
{
    int c = 0;
    cin>>c;
    cout << printk(c) ;
}