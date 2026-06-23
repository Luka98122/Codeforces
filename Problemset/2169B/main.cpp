#include <bits/stdc++.h>
using namespace std;
#define ll long long
// INFO 12:16 - 12:34
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--){
        string s;
        cin >> s;

        bool can_inf = false;

        if (s.length()==1){
            cout << '1' << '\n';
            continue;
        }
        int first_right = s.length();
        int last_left = 0;
        for (int i = 0;i<s.length()-1;i++){
            if (s[i]==s[i+1] && s[i]=='*'){
                can_inf = true;
                break;
            }
            if (s[i]=='>' || s[i]=='*'){
                first_right = min(first_right,i);
            }
            if (s[i]=='<' || s[i]=='*'){
                last_left = max(last_left,i);
            }
        }
        int i = s.length()-1;
        if (s[i]=='>' || s[i]=='*'){
            first_right = min(first_right,i);
        }
        if (s[i]=='<' || s[i]=='*'){
            last_left = max(last_left,i);
        }

        if (can_inf || first_right < last_left){
            cout << "-1" << '\n';
        }
        else{
            int res = max(last_left+1, static_cast<int>(s.length())-first_right);
            cout << res << '\n';
        }
    }
}