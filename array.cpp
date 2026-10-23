# include <iostream>
# include <vector>
#include <cstddef>

int main(){
    int n;
    std::cin >> n;
    if (n < 1 || n > 1000){
        return 1;
    }

    std::vector<int> arr(static_cast<std::size_t>(n));

    for (int i = 0; i < n; i++){
        std::cin >> arr[static_cast<std::size_t>(i)];

        if (arr[static_cast<std::size_t>(i)] < 1 || arr[static_cast<std::size_t>(i)] > 10000){
            return 1;
        }
    }
    for (int i = n-1; i >= 0; i--){
        std::cout << arr[static_cast<std::size_t>(i)] << " ";
    }

    return 0;
   
}
