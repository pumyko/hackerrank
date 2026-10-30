#include <iostream>
#include <string>
using namespace std;


template<class T>
class AddElements{
    T element;

public:
    AddElements(T arg) : element(arg) {}

    T add(T arg){
        return element + arg;
    }
};

template<>
class AddElements<string> {
    string element;

public:
    AddElements(string arg) : element(arg) {}

    string concatenate(string arg){
        return element + arg;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    while(n--){
        string type;
        cin >> type;
        if(type == "int"){
            int a, b;
            cin >> a >> b;
            AddElements<int> obj(a);
            cout << obj.add(b) << "\n";
        }
        else if(type == "float"){
            float a, b;
            cin >> a >> b;
            AddElements<float> obj(a);
            cout << obj.add(b) << "\n";
        }
        else if(type == "string"){
            string a, b;
            cin >> a >> b;
            AddElements<string> obj(a);
            cout << obj.concatenate(b) << "\n";
        }
    }
    return 0;
}
