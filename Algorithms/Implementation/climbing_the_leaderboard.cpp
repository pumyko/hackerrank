#include <bits/stdc++.h>
using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> unique;
    for(int score : ranked) {
        if(unique.empty() || unique.back() != score) {
            unique.push_back(score);
        }
    }
    vector<int> result;
    int i = unique.size() - 1;
    for(int score : player) {
        while(i >= 0 && score >= unique[i]) {
            i--;
        }
        result.push_back(i + 2);
    }
    return result;
}

int main() {
    vector<int> ranked, player;
    int n, m;
    cin >> n;
    while (n--) {
        int score;
        cin >> score;
        ranked.push_back(score);
    }
    cin >> m;
    while (m--) {
        int score;
        cin >> score;
        player.push_back(score);
    }
    for (int rank : climbingLeaderboard(ranked, player)) {
        cout << rank << endl;
    }
}
