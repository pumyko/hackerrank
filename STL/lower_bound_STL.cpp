#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int el;
        cin >> el;
        nums.push_back(el);
    }
    cin >> q;

    while(q--){
        int x;
        cin >> x;

        auto iterator = lower_bound(nums.begin(), nums.end(), x);
        int index = iterator - nums.begin() + 1;

        if(*iterator == x){
            cout << "Yes " << index << "\n";
        } else{
            cout << "No " << index << "\n";
        }
    }

    return 0;
}
