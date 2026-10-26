#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin >> a >> b;
    
    int len_a = a.size();
    int len_b = b.size();
    cout << len_a << ' ' << len_b << '\n';
    
    string a_b = a + b;
    cout << a_b << '\n';
    
    string swap_a = b[0] + a.substr(1);
    string swap_b = a[0] + b.substr(1);
    cout << swap_a << ' ' << swap_b;

    return 0;
}
