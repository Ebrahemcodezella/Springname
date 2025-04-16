#include<iostream>
using namespace std;

void Ebrahem_hany(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    Ebrahem_hany();

    string s;
    while (cin >> s) {
        cout << "كلمة: " << s << "\n";
    }

    return 0;
}
