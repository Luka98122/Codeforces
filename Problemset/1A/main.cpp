#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    
    ll w,h,a;
    cin >> w >> h >> a;
    ll res = 0;

    ll for_w = w/a;
    ll for_h = h/a;
    if (1LL * for_w*a < w) for_w++;
    if (1LL * for_h*a < h) for_h++;
    
    res += 1LL *for_w * for_h;
    cout << res;
}