#include <bits/stdc++.h>
using namespace std;

// INFO 13:59-14:24

#define ll long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        long long n;
        cin >> n;

        vector<long> a(n);
        long long smallest =  pow(10,10);
        long long neg_count = 0;
        for (int i =0;i<n;i++){
            cin >> a[i];
            if (a[i]<0) neg_count++;
            if (abs(a[i])<smallest) smallest=abs(a[i]);
        }

        
        long long res = 0;
        for (int i =0;i<n;i++){
            res+=abs(a[i]);
        }
        if (neg_count%2!=0){
        res-=2*smallest;
        }
        cout << res << '\n';
    }
}