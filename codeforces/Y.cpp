#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,ans=0;cin>>t;
    for (int i=0;i<t;i++){
        int x;cin>>x;
        vector<int>v(x);
        for (int j=0;j<x;j++){
            cin>>v[j];
        }
        sort(v.begin(), v.end());
        if (v.size()%2==1){
            for (int k=0, l=v.size()-1; k<v.size()/2;k++,l--){
                ans+=v[k]*v[l];
                v[k]=v[l]=1;
            }
            ans+=v[v.size()/2];
            cout<<ans<<endl;
        }else{
            for (int k=0, l=v.size()-1; k<v.size()/2;k++,l--){
                ans+=v[k]*v[l];
                v[k]=v[l]=1;
            } 
            cout<<ans<<endl;
        }
        ans=0;
        v.clear();
    }
}

//CODEFORCES A- DISTURBING DISTRIBUTION - RESPOSTA NAO BATE COM ENUNCIADO.
// //HA CASOS QUE EU NAO COBRI