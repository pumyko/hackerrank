#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int el;
        cin >> el;
        nums.push_back(el);
    }
    sort(nums.begin(), nums.end());
    for(int el: nums){
        cout << el << " ";
    }
    
    return 0;
}
