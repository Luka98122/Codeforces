#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--){
        vector<int> a = vector<int> (7);
        for (int i =0;i<7;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int res = 0;
        for (int i =0;i<6;i++){
            res-=a[i];
        }
        res+=a[6];
        cout << res << '\n';
    }
}