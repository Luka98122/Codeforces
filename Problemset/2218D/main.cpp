#include <bits/stdc++.h>
using namespace std;
// Minor A, technicalties
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> arr = vector<int> (120000,1);
    vector<int> primes;
    for (long long i =2;i<120000-2;i++){
        if (arr[i]==1){
            for (long long j = i*i;j<120000-2;j+=i){
                if (j<0) break;
                arr[j]=0;
            }
            primes.push_back(i);
        }
    }

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n - 1; i++) {
            // Need 1LL to force 64bit multiplication
            cout << 1LL * primes[i] * primes[i + 1] << ' ';
        }

        cout << primes[n - 1] << '\n';
    }
}