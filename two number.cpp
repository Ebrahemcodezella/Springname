#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

    double result = A / B;

    int floorResult = floor(result);
    int ceilResult = ceil(result);
    int roundResult = round(result);

    cout << "floor " << A << " / " << B << " = " << floorResult << "\n";
    cout << "ceil " << A << " / " << B << " = " << ceilResult << "\n";
    cout << "round " << A << " / " << B << " = " << roundResult << "\n";

    return 0;
}
