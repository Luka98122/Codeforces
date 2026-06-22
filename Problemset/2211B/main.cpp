#include <bits/stdc++.h>
using namespace std;
#define ll long long
//INFO 11:21 - 12:12
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    ll modulo = 676767677;
    while (t--){
        int x =0,y=0;
        cin >> x;
        cin >> y;
        ll res = 0;
        

        vector<int> a(x+y);
        for (int i = 0;i<x;i++){
            a[i] = 1;
        }
        for (int i = x;i<x+y;i++){
            a[i] = -1;
        }

        if (x==y){
            res = 1;
            cout << res << '\n';

            for (int i = 0;i<x+y;i++){
                cout << a[i] << ' ';
            }
            cout << '\n';
            continue;
        }

        for (int i = 1;i<=x+y;i++){
            if (abs(x-y)%i==0) res++;
        }

        cout << res%modulo << '\n';
        for (int i = 0;i<x+y;i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
        

    }
}