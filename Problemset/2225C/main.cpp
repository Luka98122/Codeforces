#include <bits/stdc++.h>
// INFO 21:38 - 21:50 Accepted first try
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        string top;
        string bot;
        cin >> top;
        cin >> bot;
        int res = 0;
        for (int i =0;i<n;i++){
            int hori,vert;
            hori = 0;
            vert = 0;
            if (top[i]!=bot[i]) vert++;
                            
            // horizontal layout
            if (bot[i]!=bot[i+1]){
                hori+=1;
            }
            if (top[i]!=top[i+1]){
                hori+=1;
            }
            if (vert<hori){
                res+=vert;
            }
            else{
                if (hori<vert){
                    res+=hori;
                    i++;
                }
                else{
                    res+=vert;
                }
            }
        }
        cout << res << '\n';
    }
}