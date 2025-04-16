#include <iostream>
#include <String>
using namespace std;
string uppercase(string s)
{
    string result;
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            c -= 32;
        }
        result += c;
    }
    return result;
}
string lowercase(string s)
{
    string result;
    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c += 32;
        }
        result += c;
    }
    return result;
}
int main()
{
    string s = "";
    cin>>s;
    int count_up=0;
    int count_lo=0;
    for(char c:s)
    {
        if (c >= 'a' && c <= 'z')
        {
            count_lo++;
        }
        else
        {
            if (c >= 'A' && c <= 'Z')
            {
                count_up++;
            }
        }
    }
    if(count_lo>=count_up)
    {
        cout<<lowercase(s);
    }
    else
    {
        cout<<uppercase(s);
    }
    
    return 0;
}