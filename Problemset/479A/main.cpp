#include <iostream>
#include <vector>
#include <algorithm> 
#include <array>

int recur(const std::array<int,3>& nums, int start, int end) {
    if (start==end){
        return nums[start];
    }

    int max_val = 0;

    for (int i = start;i<end; ++i){
        int left_max = recur(nums,start,i);
        int right_max = recur(nums,i+1,end);

        max_val = std::max({
            max_val,
            left_max+right_max,
            left_max*right_max
        });
    }
    return max_val;
}

int main () {
    int a,b,c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int res = 0;
    std::array<int,3> arr{};

    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    res = recur(arr,0,2);

    std::cout << res;
}