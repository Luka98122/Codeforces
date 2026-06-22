#include <bits/stdc++.h>
using namespace std;
#define ll long long

// INFO 11:06 - 11:18 Accepted First try

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        // 1 op 6
        // 2 op 5
        // 3 op 4

        // Int x is adjacent to all except 7-x
        int n;
        cin >> n;
        int res = 0;

        vector<int> a (n);

        for (int i =0;i<n;i++){
            cin >> a[i];
        }

        for (int i = 0;i<n-1;i++){
            if (a[i]+a[i+1]==7 || a[i]==a[i+1]){
                // not adjacent
                res+=1;
                i++; // we set the i+1 one to be guaranteed adjacent to the one after
            }
        }

        cout << res << '\n';

    }
}