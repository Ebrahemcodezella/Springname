#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    char s;
    int n;
    cin >> s >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << string(v[i], s) << endl;
    }

    // for (int i = 0; i < v.size() ; i++)
    // {
    //     for (int j = 0; j < v[i]; j++)
    //     {
    //         cout<<s;
    //     }
    //         cout<<endl;

    // }
}