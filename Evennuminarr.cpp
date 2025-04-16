#include <string>
#include <iostream>

using namespace std;
bool isOpposite(string s1, string s2)
{
    bool flag = false;
    if (s1.length() != s2.length() || s1[0] == s2[0])
    {
        return flag;
    }
int x1=0;
int x2=0;
for(char c:s1)
{
    x1+=c;
}
for(char ch:s2)
{
    x2+=ch;
}

    for (int i = 0; i < s1.size(); i++)
    {
        if (tolower(s1[i]) == tolower(s2[i]) &&x1==x2)
        {
            flag= true;
        }
    }

    return flag;
}

int main()
{
    cout << isOpposite("jZthIKKCdNnKQMZrGr", "JwTHikkcDnNkqmzCgR");
}