#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> a = vector<int> (n);
        map<int,int> dict;
        for (int i =0;i<n;i++){
            cin >> a[i];
            dict[a[i]]++;
        }
        int left = 0;
        int right = n;
        int smallest = n+2;
        int res = 2*n;
        for (const auto& [key, value] : dict) {
            right-=value;
            if (max(left,right) < res){
                res = max(left,right);
            }
            left+=value;
        }

        cout << res << '\n';
    }
}