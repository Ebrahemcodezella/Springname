#include<iostream>
using namespace std;

// void Ebrahem_hany(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// }
int GCD(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main()
{
    // Ebrahem_hany();
    int x,y;
    cin>>x>>y;
    cout<<GCD(x,y);

}