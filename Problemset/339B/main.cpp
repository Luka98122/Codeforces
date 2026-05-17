#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m;
    cin >> n;
    cin >> m;
    
    vector<int> vec(m,0);

    for (int i=0;i<m;++i){
        cin >> vec[i];
    }

    long long res = 0;
    long long cAt = 1;
    for (int i=0;i<m;++i){
        if (vec[i]==cAt) continue;
        if (vec[i] > cAt){
            res+=vec[i]-cAt;
            cAt = vec[i];
        }
        else{
            res+=n-cAt+vec[i];
            cAt = vec[i];
        }
    }

    cout << res;

}