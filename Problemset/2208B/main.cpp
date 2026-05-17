#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <queue>
//21:07 - 

using namespace std;

struct card { 
    bool isWinCon; 
    int cost; 
};

int main() {
    int t;
    cin >> t;
    for (int _=0; _<t;++_){
        int n,k,p,m;
        //cards, hand capacity, wincon start pos,max elixir
        cin >> n;
        cin >> k;
        cin >> p;
        cin >> m;

        p-=1;

        vector<card> hand(k);
        vector<int> costs(n,0);

        queue<card> upcoming;

        for (int i=0;i<n;i++){
            cin >> costs[i];
            if (i<k){
                hand[i] = card{i==p,costs[i]};
            }
            else{
                upcoming.push(card{i==p,costs[i]});
            }
        }
        int res = 0;
        bool done = false;
        while (m>0){
            bool eb = false;
            int cheapest = 5001;
            int cheapInd = -1;
            for (int i =0;i<k;i++){
                if (hand[i].isWinCon){
                    if (hand[i].cost<=m){
                        m-=hand[i].cost;
                        upcoming.push(hand[i]);
                        hand[i] = upcoming.front();
                        upcoming.pop();
                        res++;
                    }
                    else{
                        cout << res << '\n';
                        done = true;
                    }
                    eb = true;
                    break;
                }
                else{
                    if (hand[i].cost < cheapest && hand[i].cost<=m){
                        cheapest = hand[i].cost;
                        cheapInd = i;
                    }
                }
            }
            if (done) break;
            if (eb) continue;
            
            if (cheapInd==-1) break;

            m-=hand[cheapInd].cost;
            upcoming.push(hand[cheapInd]);
            hand[cheapInd] = upcoming.front();
            upcoming.pop();

        }
        if (done==false) cout << res << '\n';

    }
}