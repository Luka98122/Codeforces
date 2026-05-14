#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string s;

    std::cin >> s;
    int cnt = 1;
    for (int i = 1;i<s.length();++i){
        if (s[i]==s[i-1]){
            ++cnt;
            if (cnt==7){
                std::cout << "YES";
                return 0;
            }
        }
        else{
            cnt = 1;
        }
    }
    if (cnt==7){
        std::cout << "YES";
        return 0;
    }
    std::cout << "NO";
    
}