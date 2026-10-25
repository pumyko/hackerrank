#include <iostream>
#include <vector>
#include <cstddef>


int main(){
    // n num of arrays; q num of quries to these arrays
    int n, q;
    std::cin >> n >> q;
    std::vector<std::vector<int>> arr(static_cast<std::size_t>(n));

    for(int i = 0; i < n; i++){
        int k;
        std::cin >> k;
        arr[static_cast<std::size_t>(i)].resize(static_cast<std::size_t>(k));

        for (int j = 0; j < k; j++) {
            std::cin >> arr[static_cast<std::size_t>(i)][static_cast<std::size_t>(j)];
        }
   
    }

    for (int i = 0; i < q; i++){
        int a, e;
        std::cin >> a >> e;
        std::cout << arr[static_cast<std::size_t>(a)][static_cast<std::size_t>(e)] << std::endl;
    }
    return 0;
}




