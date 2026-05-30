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
        
        long long current_sum = 0;
        long long current_min_h = 2e18; 

        for (long long i = 1; i <= n; i++) {
            long long a;
            cin >> a;
            
            current_sum += a;
            
            long long max_h_for_this_prefix = current_sum / i;
            
            current_min_h = min(current_min_h, max_h_for_this_prefix);
            
            cout << current_min_h << (i == n ? "" : " ");
        }
        cout << '\n';
    }
}