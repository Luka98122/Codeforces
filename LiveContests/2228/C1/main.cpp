#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

long long res = 1e18;
int n=0, l=0, r=0;
long long a = 0;
string s_a;

void recur(long long sofar, int depth, int state) {
    if (depth >= s_a.length()) {
        res = min(res, abs(a - sofar));
        return;
    }

    if (state == 1) {
        recur(sofar * 10 + l, depth + 1, 1);
    } 
    else if (state == -1) {
        recur(sofar * 10 + r, depth + 1, -1);
    } 
    else {
        int target = s_a[depth] - '0';
        
        int next_state_l = 0;
        if (l > target) next_state_l = 1;
        else if (l < target) next_state_l = -1;
        recur(sofar * 10 + l, depth + 1, next_state_l);
        
        int next_state_r = 0;
        if (r > target) next_state_r = 1;
        else if (r < target) next_state_r = -1;
        recur(sofar * 10 + r, depth + 1, next_state_r);
    }
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;

    for (int _=0;_<t;_++){
        res = 1e18;
        cin >> a;
        cin >> n;

        cin >> l;
        cin >> r;
        s_a = to_string(a);

        
        recur(0,0,0);
        long long other = 0;
        if (s_a.length() > 1) {
            
            for (int i = 0;i<s_a.length()-1;i++){
                other = other*10+r;
            }
            res = min(res,abs(a-other));
        }
        other = l;
        if (l==0){
            other =r;
        }
        for (int i = 0;i<s_a.length();i++){
            other = other*10+l;
        }
        res = min(res,abs(a-other));

        cout << res << "\n";

    }
}