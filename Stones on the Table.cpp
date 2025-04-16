#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch[n];
    int count = 0;
    cin >> n;
    for (int c = 0; c < n; c++)
    {
        cin >> ch[c];
    }
    for (int c = 0; c < n; c++)
    {
        if (ch[c] == ch[c + 1] && ch[c + 1] != NULL)
        {
            count++;
        }
    }
    cout << count << endl;
}