#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    for (int _ = 0;_<t;++_){
        int n,a,b;

        std::cin >> n;
        
        std::cin >> a;
        std::cin >> b;

        std::vector<int> left {a};
        std::vector<int> right {b};
        
        for (int i = n;i>0;i--){
            if (i==a || i==b ) continue;

            if (i>a && left.size()<n/2) left.push_back(i);
            else {
                right.push_back(i);
            }
        }
        
        bool valid = true;
        if (left.size() < n/2 || right.size() < n/2) valid = false;
        else {
            for (int i =0;i<n/2;++i){
                if (left[i]<a || right[i]>b) {
                    valid = false;
                    break;
                }
            }
        }
        
        if (!valid){
            std::cout << "-1" <<'\n';
        }
        else{
            for (int i = 0;i<n/2;++i){
                std::cout << left[i] << ' ';
            }
            for (int i = 0;i<n/2;++i){
                std::cout << right[i] << ' ';
            }
            std::cout << '\n';
        }

    }
}