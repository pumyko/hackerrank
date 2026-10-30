#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define INF 10000000
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))  // if a < b then a, else b

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    while(n--){
        int el;
        cin >> el;
        nums.push_back(el);
    };

    int maximum = -INF;
    int minimum = INF;

    for(int el : nums){
        maximum = MAX(maximum, el);
        minimum = MIN(minimum, el);
    };
    
    cout << "Result = " << maximum - minimum;

    return 0;
}
