#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n = 0;
    int curSum = 0;
    int sum = 0;

    std::cin >> n;
    std::vector<int> vec(n);

    for (int i=0;i<n;i++){
        std::cin >> vec[i];
        sum+=vec[i];
    }
    std::sort(vec.begin(),vec.end());
    
    for (int i=n-1;i>=0;i--){
        if (curSum>sum/2) {
            std::cout << n-i-1;
            return 0;
        }
        curSum+=vec[i];
    }
    std::cout << n;
}