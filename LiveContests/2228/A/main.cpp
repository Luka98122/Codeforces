#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;

    for (int _=0;_<t;_++){
        int n;
        cin >> n;

        vector<int> cnts(3,0);
        int res = 0;
        for (int i=0;i<n;i++){
            int tmp;
            cin >> tmp;

            cnts[tmp%3]++;
        }

        res = cnts[0]+min(cnts[1],cnts[2]);
        if (cnts[1]<cnts[2]){
            res+=(cnts[2]-cnts[1])/3;
        }
        if (cnts[1]>cnts[2]){
            res+=(cnts[1]-cnts[2])/3;
        }
        cout << res << '\n';
    }
}