#include <iostream>
#include <deque>
#include <vector>

using namespace std;

void printKMax(const vector<int>& arr, size_t k) {
    deque<size_t> dq;

    for (size_t i = 0; i < arr.size(); i++) {

        // delete indices of elements not in the current window
        while (!dq.empty() && i >= k && dq.front() <= i - k) {
            dq.pop_front();
        }

        // delete candidates that are smaller than the current element
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        // add the index of the current element
        dq.push_back(i);

        // If the window is formed, print the maximum element
        if (i + 1 >= k) {
            cout << arr[dq.front()] << " ";
        }
    }

    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(static_cast<size_t>(n));

        for (size_t i = 0; i < arr.size(); i++) {
            cin >> arr[i];
        }

        printKMax(arr, static_cast<size_t>(k));

        t--;
    }

    return 0;
}
