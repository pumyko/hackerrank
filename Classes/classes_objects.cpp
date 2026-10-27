#include <vector>
#include <iostream>
#include <cassert>
using namespace std;

class Student{
    vector<int> scores;

public:
    void input(){
        // read 5 ints and save them into scores
        int score;
        for(int i = 0; i < 5; i++){
            cin >> score;
            scores.push_back(score);
        }
    };
    int calculateTotalScore(){
        // return sum of the students scores
        int total = 0;
        for(int i = 0; i < 5; i++){
            total += scores[i];
        }        
        return total;
    };
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
