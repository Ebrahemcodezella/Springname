#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int D = A;
    int E = B;
    int F = C;
    if(A>B) swap(A,B);
    if(A>C) swap(A,C);
    if(B>C) swap(B,C);
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;

    cout<<endl;
    cout<<D<<endl;
    cout<<E<<endl;
    cout<<F<<endl;
}