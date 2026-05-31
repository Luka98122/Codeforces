#include <bits/stdc++.h>
using namespace std;
// A, 45 min
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<ll> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            ll b;
            cin >> b;
            pref[i] = pref[i - 1] + b;
        }

        sort(a.begin(), a.end());

        ll ans = 0;

        for (int i = 0; i < n; i++) {
            ll x = a[i];

            ll k = a.end() - lower_bound(a.begin(), a.end(), x);

            ll levels = upper_bound(pref.begin(), pref.end(), k) - pref.begin() - 1;

            ans = max(ans, x * levels);
        }

        cout << ans << '\n';
    }

    return 0;
}