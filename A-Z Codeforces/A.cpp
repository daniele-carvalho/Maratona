#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
    int n;
 
    while(t--){
        cin>>n;
        int ans=0;
        vector<int>x(n*2);
        for (int j=0;j<n*2;j++){
            cin>>x[j];
        }
        sort(x.begin(), x.end()); //complexidade O(n log n)
        for(int i=0;i<n*2;i+=2){
        ans+=x[i];
        }
    cout<<ans<<"\n";
    }
}   
//COMPLEXIDADE DO CÓDIGO:
//O(t * n log n) 