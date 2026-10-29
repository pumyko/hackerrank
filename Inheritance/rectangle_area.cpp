#include <iostream>
using namespace std;

class Rectangle{
public:
    int w, h;
    void display(){
        cout << w << " " << h << "\n";
    }
};

class RectangleArea : public Rectangle{
public:
    void read_input(){
        cin >> w >> h;
    }
    void display(){
        cout << w * h << "\n";
    }

};

int main(){
    RectangleArea rec;
    rec.read_input();
    
    rec.Rectangle::display();
    rec.display();
    return 0;
}
