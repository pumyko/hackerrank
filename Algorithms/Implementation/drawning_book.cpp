#include <bits/stdc++.h>
using namespace std;

int PageCount(int n, int p) {
    int front = p / 2;
    int back = n / 2 - p / 2;
    return min(front, back);
} 


int main() {
    int n, p;
    cin >> n >> p;
    int result = PageCount(n, p);
    cout << result << endl;
}
