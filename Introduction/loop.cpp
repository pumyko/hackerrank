# include <iostream>
# include <string>

int main(){
    int n, m;
    std::cin >> n >> m;

    std::string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for(int i = n; i <= m; i++){
        if (i <= 9) {
            std::cout << numbers[i-1] << std::endl;
        } 
        else {
            if (i % 2 == 0) {
                std::cout << "even" << std::endl;
            } 
            else {
                std::cout << "odd" << std::endl;
            }
        }
    }
    return 0;
}
