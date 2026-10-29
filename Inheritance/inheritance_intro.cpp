#include <iostream>
using namespace std;

class Triangle{
public:
    void triangle(){
        cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle{
public:
    void isosceles(){
        cout<<"I am an isosceles triangle\nIn an isosceles triangle two sides are equal\n";
    }
};

int main(){
    Isosceles is_tr;
    is_tr.isosceles();
    is_tr.triangle();
    return 0;
}
