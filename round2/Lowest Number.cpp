#include<iostream>
#include<array>
using namespace std;
void solve(int n)
{
int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    int post = arr[0];
    int index=1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < post)
        {
            post= arr[i];
            index=i+1;
        }
    }
cout<<post<<" "<<index;
    
}
int main()
{
    int n ; 
    cin>>n;
    solve(n);
}
