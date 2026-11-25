//two pollers - paired up - usaco
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
        freopen("pairup.in", "r", stdin);
        freopen("pairup.out", "w", stdout);

       ll n; cin>>n;
       vector<pair<ll, ll>>v;

    
       for (int i=0;i<n;i++){
           ll x,y; cin>>x>>y;
           v.push_back({y,x});
       }
       
       sort(v.begin(), v.end());
       
       ll maior=0;
       ll i=0, j= v.size()-1;
       while (i<j){
           maior = max(maior, v[i].first+v[j].first);
           
            ll t = min(v[i].second, v[j].second);
            v[i].second -= t;
            v[j].second -= t;

            if (v[i].second == 0) i++;
            if (v[j].second == 0) j--;
       }
       cout<<maior<<endl;
}