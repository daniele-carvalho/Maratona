#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    vector<pair<int,int>>v;
    for (int i=0;i<t;i++){
        int a,b; cin>>a>>b;
        v.push_back({a,+1});
        v.push_back({b,-1});
        //quem sai e qm entra
    }
    sort(v.begin(), v.end());

    int sum=0;
    int m=0;
    for (auto [x,y]:v){
        sum+=y;
        m = max(m,sum);
    }
    cout<<m<<endl;
}

//voltar pra esse problema.