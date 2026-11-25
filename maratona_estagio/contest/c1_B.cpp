#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    vector<int>v;
    vector<int>u;
    
    while (t--){
        int n; cin>>n;
        for (int i=0;i<n;i++){
            int tam; cin>>tam;
            v.push_back(tam);
        }
        
        sort(v.begin(), v.end(), [](int a, int b){
            return a%2 < b%2;
            });
        
        int m=0, b=0; int ans=1;
        
        for (int z=0;z<n;z++){
            if (v[z]%2==0){
                m+=v[z];
            }else{
                b+=v[z];
            }
            
            if (b>=m){ 
                ans=0; break;
            }
        }
        
        ans==1? cout<<"YES"<<endl: cout<<"NO"<<endl;
        b,m,n=0;
        v.clear();
    }
}