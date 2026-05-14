#include <iostream>
#include <vector>

// Elo 800
// Learning syntax

int main() {
    int n;
    std::cin >> n;

    int res = 0;
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = 0; j < 3; ++j) {
            int tmp=0;
            std::cin >> tmp;
            cnt+=tmp;
        }
        if (cnt>=2) res++;
    }
    std::cout << res;
    return 0;
}