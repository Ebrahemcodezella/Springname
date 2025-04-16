#include <iostream>
#include<vector>
using namespace std;
int main()

{
    
    int n;
    cin >> n;
    long count_even = 0;
    long count_odd = 0;
    long count_negatavi = 0;
    long count_positive = 0;
    vector<long> val(n);
    for (long i = 0; i < n; i++)
    {
        cin>>val[i];
    }
    
    for (long i = 0; i < n; i++)
    {
        if (val[i] > 0&&val[i]!=0)
            count_positive++;
        if (val[i] < 0&&val[i]!=0)
            count_negatavi++;
        if (val[i] % 2 == 0)
            count_even++;
        else
            count_odd++;
    }

    cout << "Evan: " << count_even << endl;
    cout << "Odd: " << count_odd << endl;
    cout << "Positive: " << count_positive << endl;
    cout << "Negative: " << count_negatavi << endl;
    return 0;
}