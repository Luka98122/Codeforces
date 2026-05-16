#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;

    for (int _=0;_<t;_++){
        int n,x1,x2,k;
        cin >> n;
        cin >> x1;
        cin >> x2;
        cin >> k;

        if (n<=3){ // Nowhere to run to edge case.
            cout << "1" << "\n";
            continue;
        }

        int res = 0;
        int r1 = 0;
        int r2 = 0;

        if (x1<x2){
            r1 = x2-x1;
            r2 = x1+n-x2;
        }
        else{
            r1 = x1-x2;
            r2 = x2+n-x1; 
        }

        res = min(r1,r2)+k;
        cout << res << "\n";   
    }
}