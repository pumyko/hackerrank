#include <iostream>
#include <set>
using namespace std;

int main(){
    int q;
    cin >> q;
    set<int> s;

    while(q--){
        int type, x;
        cin >> type >> x;

        if(type == 1){
            s.insert(x);
        }
        else if(type == 2){
            s.erase(x);
        }
        else if(type == 3){
            cout << s.find(x) != s.end() ? "Yes\n" : "No\n";
        }
    }

    return 0;
}
