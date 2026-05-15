#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    for (int _ = 0;_<t;++_){
        int n;
        std::cin >> n;

        std::vector<int> vec(n,0);

        for (int i = 0;i<n;++i){
            std::cin >> vec[i];
        }
        std::vector<int> res(n,0);
        for (int i =0;i<n;++i){
            int smaller = 0;
            int larger = 0;

            for (int j=i+1;j<n;++j){
                if (vec[j]<vec[i]){
                    smaller++;
                }
                if (vec[j]>vec[i]){
                    larger++;
                }
            }
            res[i] = std::max(smaller,larger);
        }

        for (int i = 0;i<n;++i){
            std::cout << res[i] << " ";
        }
        std::cout << '\n';
    }
}