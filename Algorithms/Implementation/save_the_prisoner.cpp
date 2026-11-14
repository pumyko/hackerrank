#include <bits/stdc++.h>
using namespace std;

int saveThePrisoner(int n, int m, int s) {
    return (s + m - 2) % n + 1;
}

int main() {
    int t, n, m, s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m >> s;
        cout << saveThePrisoner(n, m, s) << endl;
    }
    return 0;
}
