#include <bits/stdc++.h>

using namespace std;
//H

void solve(){
    int n;
    cin >> n;
    vector<int> vec(n,0);
    for (int i =0;i<n;i++){
        cin >> vec[i];
    }

    for (int i = 1;i<n-1;i++){
        vec[i] -= vec[i-1]*2;
        vec[i+1] -= vec[i-1];
        vec[i-1] -= vec[i-1];
        
        if (vec[i]<0 || vec[i+1]<0){
            cout << "NO" << '\n';
            return;
        }
    }
    if (vec[n-1]!=0 || vec[n-2]!=0){
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
}

int main() {
    int t;
    cin >> t;

    for (int _=0;_<t;_++){
        solve();
    }
}