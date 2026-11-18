#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    if (v1 == v2) {
        if (x1 == x2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        int t = (x2 - x1) / (v1 - v2);
        if (t >= 0 && (x2 - x1) % (v1 - v2) == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
