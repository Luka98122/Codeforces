#include <bits/stdc++.h>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        n++;
        if (n<-67) n=-67;
        if (n>67) n = 67;
        cout << n << "\n";
    }
}