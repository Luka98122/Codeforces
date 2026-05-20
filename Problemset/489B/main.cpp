#include <bits/stdc++.h>

using namespace std;

//2nd try - Initialised array to length 100, so input 100 didnt work (literal edge case)

int main (){
    int n,m;
    cin >> n;
    vector <int>boys (101,0);
    vector <int>girls (101,0);
    
    for (int i =0;i<n;i++){
        int tmp;
        cin >> tmp;
        boys[tmp]++;
    }
    cin >> m;
    for (int i =0;i<m;i++){
        int tmp;
        cin >> tmp;
        girls[tmp]++;
    }

    int res = 0;
    for (int i=0;i<100;i++){
        int tmp,a,b;
        a = boys[i]+boys[i+1];
        b = girls[i]+girls[i+1];
        tmp = min(a,b);
        res+=tmp;
        if (a<b){
            boys[i] = 0;
            boys[i+1] = 0;
            if (girls[i]<=a){
                a-=girls[i];
                girls[i] = 0;
                girls[i+1]-=a;
            }
            else{
                girls[i]-=a;
            }
        }
        else if (b<a){
            girls[i]=0;
            girls[i+1]=0;
            if (boys[i]<=b){
                b-=boys[i];
                boys[i] = 0;
                boys[i+1]-=b;
            }
            else{
                boys[i]-=b;
            }
        }
        else{
            boys[i]=0;
            boys[i+1]=0;
            girls[i]=0;
            girls[i+1]=0;
        }
    }
    cout << res;
}