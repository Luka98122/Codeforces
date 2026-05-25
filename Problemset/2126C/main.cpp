#include <bits/stdc++.h>
using namespace std;
//A
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

        sort(h.begin(), h.end());

        bool ok = true;

        for (int i = 1; i < n; ++i) {
            if (start > h[i])
                continue;

            if (h[i] > h[i - 1] + start) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}