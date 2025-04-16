// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << i<<endl;
//     }
// }
#include <iostream>
#include<vector>
using namespace std;
int main()

{
    
    int n;
    cin >> n;
    int count_even = 0;
    int count_odd = 0;
    int count_negatavi = 0;
    int count_positive = 0;
    vector<int> val(n);
    for (long i = 0; i < n; i++)
    {
        cin>>val[i];
    }
    
    for (long i = 1; i <= n; i++)
    {
        if (val[i] > 0 &&val[i]!=0)
            count_positive++;
        if (val[i] < 0&&val[i]!=0)
            count_negatavi++;
        if (val[i] % 2 == 0)
            count_even++;
        if (val[i] % 2 != 0)
            count_odd++;
    }

    cout << "Evan: " << count_even << endl;
    cout << "Odd: " << count_odd << endl;
    cout << "Positive: " << count_positive << endl;
    cout << "Negative: " << count_negatavi << endl;
    return 0;
}