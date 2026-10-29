#include <iostream>
#include <map>
using namespace std;


int main(){
    int q;
    cin >> q;
    map<string,int>marks;
    while(q--){
        int type, y;
        string x;
        cin >> type >> x;
        if(type == 1){
            cin >> y;
            marks[x] += y;
        }
        else if(type == 2){
            marks.erase(x);
        }
        else if(type == 3){
            cout << marks[x] << "\n";
        }

    }
    return 0;
}
