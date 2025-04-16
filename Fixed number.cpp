#include<iostream>
using namespace std;
int main()
{
    const int correct=1999;
//     bool stat=true;
// while (stat)
// {
//     int pass;
//     cin>>pass;
//     if (pass==correct)
//     {
//         cout<<"Correct\n";
//         stat=false;
//     }
//     else
//     {
//         cout<<"Wrong\n";
//     }

// }

//vector<int> pass(n)
    for (int i = 0; i < 10000; i++)
    {
        int pass;
        cin>>pass;
        if(pass!=correct)
    {
        cout<<"Wrong\n";
    }
    
    else
    {
    cout<<"Correct\n";
    break;
    }
    }
}