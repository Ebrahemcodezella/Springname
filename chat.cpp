#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if (n < 1 || n > 1000)
        return 1;

    long count_even = 0;
    long count_odd = 0;
    long count_negative = 0;
    long count_positive = 0;
    vector<long> val(n);

    for (long i = 0; i < n; i++)
    {
        cin >> val[i];
    }

    for (long i = 0; i < n; i++)
    {
        if (val[i] > 0)
            count_positive++;
        if (val[i] < 0)
            count_negative++;
        if (val[i] % 2 == 0)
            count_even++;
        else
            count_odd++;
    }

    cout << "Even: " << count_even << endl;
    cout << "Odd: " << count_odd << endl;
    cout << "Positive: " << count_positive << endl;
    cout << "Negative: " << count_negative << endl;

    return 0;
}
