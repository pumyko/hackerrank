#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> rows(m, 0);
        vector<int> cols(n, 0);

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1){
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        int count = 0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1 && (rows[i] > 1 || cols[j] > 1)){
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> grid = {{1, 0}, {0, 1}};
    int result = solution.countServers(grid);
    cout << "Number of servers that can communicate: " << result << endl;

    return 0;
}
