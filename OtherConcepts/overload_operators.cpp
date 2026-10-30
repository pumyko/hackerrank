#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Complex{
public:
    int a, b;
};

Complex operator+(const Complex& c1, const Complex& c2){
    Complex result;

    result.a = c1.a + c2.a;
    result.b = c1.b + c2.b;

    return result;
}

ostream& operator<<(ostream& out, const Complex& c){
    out << c.a << "+i" << c.b; 
    return out;
}

int main(){
    Complex c1, c2;
    string s1, s2;
    cin >> s1 >> s2;

    char plus, i;

    stringstream ss1(s1);
    ss1 >> c1.a >> plus >> i >> c1.b;

    stringstream ss2(s2);
    ss2 >> c2.a >> plus >> i >> c2.b;

    Complex result = c1 + c2;
    
    cout << result;

    return 0;
}
