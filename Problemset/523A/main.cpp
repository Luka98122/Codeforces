#include <bits/stdc++.h>

using namespace std;

int main() {
    int w,h;
    cin >> w;
    cin >> h;

    vector<vector<string>> mat (h,vector<string>(w,"a"));

    for (int i =0;i<h;++i){
        string inp;
        cin >> inp;
        for (int j =0;j<w;++j){
            mat[i][j] = string(1,inp[j]);
        }

    }

    vector<vector<string>> mat2 (w,vector<string>(h,"a"));

    for (int i = 0; i < h; ++i){
        for (int j = 0; j < w; ++j){
            mat2[j][i] = mat[i][j];
        }
    }
    
    for (int i =0;i<w;++i){
        for (int j = 0;j<h;++j){
            cout << mat2[i][j] << mat2[i][j];
        }
        cout << '\n';
        for (int j = 0;j<h;++j){
            cout << mat2[i][j] << mat2[i][j];
        }
        cout << '\n';
    }

}