// #include <iostream>
// using namespace std;
// int main()
// {
//     long long n;
//     cin >> n;
//     int res = 0;
//     int count = 0;
//     bool flage=false;
//     while (n != 0)
//     {
//         int x = n % 10;
//         if (x == 7 || x == 4)
//         {
//             res = x + 10 * count;
//             count++;
//         }
//         else
//         {
//             cout << "NO";
//             return-1;
//         }
//         n /= 10;
//     }
//     while (res != 0)
//     {
//         if (res % 10 != 7 && res % 10 != 4)
//             {
//                 break;
//             }
//         else
//         {
//             flage=true;
//         }
//         res /= 10;
//     }
//     if (flage)
//     {
//         cout<<"YES";
//     }
    
// }
#include <iostream>
using namespace std;

// دالة للتحقق مما إذا كان العدد محظوظًا
bool isLucky(int count) {
    if (count == 0) return false; // 0 ليس عددًا محظوظًا
    while (count > 0) {
        int digit = count % 10;
        if (digit != 4 && digit != 7) {
            return false; // إذا كان هناك رقم ليس 4 أو 7، فهو ليس محظوظًا
        }
        count /= 10;
    }
    return true; // جميع الأرقام كانت محظوظة
}

int main() {
    string n;
    cin >> n; // قراءة الرقم كسلسلة

    int luckyCount = 0; // عدد الأرقام المحظوظة (4 و 7)

    // حساب الأرقام المحظوظة في الرقم المدخل
    for (char digit : n) {
        if (digit == '4' || digit == '7') {
            luckyCount++;
        }
    }

    // التحقق مما إذا كان عدد الأرقام المحظوظة عددًا محظوظًا
    if (isLucky(luckyCount)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}