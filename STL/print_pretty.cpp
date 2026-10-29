#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        double A, B, C;
        cin >> A >> B >> C;

        cout << nouppercase << showbase << hex << (long long)A << "\n";

        cout << dec << noshowbase << showpos
             << fixed << setprecision(2)
             << setw(15) << setfill('_') << B << "\n";

        cout << noshowpos << uppercase
             << scientific << setprecision(9) << C << "\n";

        cout << setfill(' ');
    }

    return 0;
}
