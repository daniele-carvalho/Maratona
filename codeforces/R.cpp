//2195B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, cont=0; cin>>t;
    
    for(int i=0;i<t;i++){
        int n;cin>>n;
        vector<int>v1(n);
        vector<int>v2(n);
        for (int j=0;j<n;j++){
            cin>>v1[j];    
        }
        
        for (int k=0;k<n;k+=2){
            if (v[k]>v[k+2]){
                swap(v[k], v[k+2]);
            }
        }
    }
    
}