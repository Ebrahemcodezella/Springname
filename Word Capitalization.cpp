#include <iostream>
#include<string>
#include<iterator>
using namespace std;
int main()
{
    string word;
    cin >> word;
  char sp = *word.begin();
    if (sp >= 'a' && sp <= 'z')
    {
        word[0]-=32;
    }
    cout <<word;
}