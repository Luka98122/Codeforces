#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t;
    cin >> t;

    for (int _=0;_<t;++_){
        int n,k;
        cin >> n >> k;

        vector<int> heights(n,0);
        for (int i =0;i<n;++i){
            cin >> heights[i];
        }
        int m = heights[k];
        sort(heights.begin(), heights.end());
        vector<int> h;
        if (heights[0]>=m){
            h.push_back(heights[0]);
        }
        int ind = 0;
        for (int i=1;i<n;++i){
            if (heights[i] >= m && (ind==0 || h[ind-1]!=heights[i])){
                h.push_back(heights[i]);
                ind++;
            }
        }
        bool br = false;
        int curWater=0;
        for (int i=0;i<ind-1;++i){
            if (curWater<h[i+1]-h[i]) {
                cout << "NO" << '\n';
                br = true;
                break;
            }
            curWater+=h[i+1]-h[i];
        }
        if (br) break;
        cout << "YES" << '\n';

    }
}