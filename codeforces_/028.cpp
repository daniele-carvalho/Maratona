//2191 problem a - array coloring
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--){
        vector<pair<int, int>>v;
        int n;cin>>n;
        int aux=0;
        for (int i=0;i<n;i++){
            int r=0; cin>>r;
            v.push_back({r, aux});
            aux= !aux;
        }
        sort(v.begin(), v.end());
        int ans=1;
        for (int i=0;i<n-1;i++){
            if (v[i].second == v[i+1].second){
                ans=0;
            }
        }
        ans==1? cout<<"YES\n": cout<<"NO\n";
    }
}