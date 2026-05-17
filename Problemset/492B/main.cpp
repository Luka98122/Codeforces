#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;
//21:50 - 21:59
// Technically second submission - but only because I didn't know I had to add
// std::cout << std::fixed << setprecision(9);

int main() {
    std::cout << std::fixed << setprecision(9);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int l;
    cin >> n;
    cin >> l;

    vector<double> positions(n,0);

    double worst = 0;
    for (int i=0;i<n;i++){
        cin >> positions[i];
    }

    sort(positions.begin(),positions.end());

    for (int i=1;i<n;i++){
        worst = max(worst,(positions[i]-positions[i-1])/2);
    }

    worst = max(worst,l-positions[n-1]);
    worst = max(worst,positions[0]);
    cout << worst;
}