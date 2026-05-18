#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    for (int _=0;_<t;++_){
        int n,k,q;
        cin >> n;
        cin >> k;
        cin >> q;
        vector<bool> days (n,false);
        int tmp;
        tmp = 0;
        for (int i=0;i<n;++i){
            cin >> tmp;
            if (tmp>q) days[i] = false;
            else{
                days[i] = true;
            }
        }
        long long res = 0;
        int cur = 0;

        for (int i = 0; i < n; i++) {
            if (days[i]) {
                cur++;
            } else {
                if (cur >= k) {
                    long long len = cur - k + 1;
                    res += len * (len + 1) / 2;
                }
                cur = 0;
            }
        }

        if (cur >= k) {
            long long len = cur - k + 1;
            res += len * (len + 1) / 2;
        }

        cout << res << '\n';
    }
}