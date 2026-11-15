#include <bits/stdc++.h>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
// n - size of an arr
// k - shift -k
// q - queries
    int n = a.size();
    vector<int> result;
    for (int i = 0; i < queries.size(); i++) {
        int index = (queries[i] - k % n + n) % n;
        result.push_back(a[index]);
    }
    return result;
}

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> queries(q);
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }
    vector<int> result = circularArrayRotation(a, k, queries);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}
