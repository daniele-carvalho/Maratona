#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    vector<ll>v;
    vector<ll>prefixsum;
    while(t--){
        int n,q;cin>>n>>q;
        v.push_back(0);

        //le vetor inicial
        for (int i=1;i<n+1;i++){
            ll num; cin>>num;
            v.push_back(num);
        }
        
        //consultas
        prefixsum.resize(n + 1);
        prefixsum[0] = 0;
    
        for(int j=0;j<q;j++){
            int l,r,k;cin>>l>>r>>k;
            
            for(int p=1;p<=n;p++){
                prefixsum[p] = v[p]+ prefixsum[p-1];
            }
            
            ll somatotal= prefixsum[n];
            ll somaintervalo= (prefixsum[r]-prefixsum[l-1]);
            ll ans = somatotal - somaintervalo + (r-l+1)*k;
            
            
            ans%2==1? cout<<"YES"<<endl: cout<<"NO"<<endl;
            
        }
        prefixsum.clear();
        v.clear();
        
    }
}