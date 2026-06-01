#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int n = (int)s.size();

        vector<int> pref2(n + 1, 0);
        vector<int> suf13(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref2[i + 1] = pref2[i] + (s[i] == '2');
        }

        for (int i = n - 1; i >= 0; i--) {
            suf13[i] = suf13[i + 1] + (s[i] == '1' || s[i] == '3');
        }

        int keep = 0;

        for (int i = 0; i <= n; i++) {
            keep = max(keep, pref2[i] + suf13[i]);
        }

        cout << n - keep << '\n';
    }

    return 0;
}