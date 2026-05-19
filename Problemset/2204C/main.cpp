#include <algorithm>
#include <iostream>
#include <vector>
#include <array>
#include <numeric>

using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;

    for (int _=0;_<t;++_){
        ll a,b,c,m;
        cin >> a >> b >> c >> m;
    

        ll all_often = lcm(lcm(a,b),c);
        ll all_times = m/all_often;

        ll resA = 0, resB = 0, resC = 0;

        ll aNotAll = (m/a) - all_times; // This is when A attends but is not with everyone (+1 or alone)
        ll bNotAll = (m/b) - all_times; // This is when B attends but is not with everyone (+1 or alone)
        ll cNotAll = (m/c) - all_times; // This is when C attends but is not with everyone (+1 or alone)

        ll aAlone = 2*all_times + aNotAll - m/(lcm(a,b)) - m/(lcm(a,c));
        ll bAlone = 2*all_times + bNotAll - m/(lcm(b,a)) - m/(lcm(b,c));
        ll cAlone = 2*all_times + cNotAll - m/(lcm(c,a)) - m/(lcm(c,b));
        
        resA = aAlone*6 + (aNotAll-aAlone)*3 + all_times*2;
        resB = bAlone*6 + (bNotAll-bAlone)*3 + all_times*2;
        resC = cAlone*6 + (cNotAll-cAlone)*3 + all_times*2;

        cout << resA << " " << resB << " " << resC << '\n';
    }
}