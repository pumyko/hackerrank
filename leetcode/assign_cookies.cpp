#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0;
        int j = 0;
        int count = 0;

        while(i < g.size() && j < s.size()) {
            if(g[i] <= s[j]) {
                count++;
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1};

    int result = solution.findContentChildren(g, s);
    cout << "Number of content children: " << result << endl;

    return 0;
}
