#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        --k;

        vector<long long> h(n);

        for (auto &x : h)
            cin >> x;

        long long start = h[k];
        long long mx = *max_element(h.begin(), h.end());

        if (start == mx) {
            cout << "YES\n";
            continue;
        }

        sort(h.begin(), h.end());

        vector<long long> v;

        for (auto x : h) {
            if (x >= start) {
                if (v.empty() || v.back() != x)
                    v.push_back(x);
            }
        }

        bool ok = true;

        for (int i = 0; i + 1 < v.size(); ++i) {
            if (v[i + 1] > 2 * v[i]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}