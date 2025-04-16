#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool distancet_name[100]={false};
    int count=0;
    for(char c : s)
    {
        int index = c-'a';
        if (!distancet_name[index])
        {
            distancet_name[index]=true;
            count++;
        }
    }
    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    
    
}