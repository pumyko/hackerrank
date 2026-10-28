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
    int er_el;
    cin >> er_el;
    nums.erase(nums.begin() + (er_el-1));
    
    int er_start, er_end;
    cin >> er_start >> er_end;
    nums.erase(nums.begin() + (er_start-1), nums.begin() + (er_end-1));

    cout << nums.size() << "\n";
    for(int el: nums){
        cout << el << " ";
    }

    return 0;
}
