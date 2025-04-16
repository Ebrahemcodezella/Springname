#include <iostream>
using namespace std;
int main()
{
    long A, B, C;
    cin >> A >> B >> C;
    long min = A;
    long max = A;
    if(B<min)
    {
        min=B;
    }
    if(B>max)
    {
        max =B;
    }
    if(C<min)
    {
        min=C;
    }
    if (C>max)
    {
        max= C;
    }
    cout<<min<<" "<<max;
}