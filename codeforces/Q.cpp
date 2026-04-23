#include <bits/stdc++.h>
using namespace std;

/*Codeforces round 1080 - div 3
 * 2195A
 */

int main(){
    int t;cin>>t;
    bool ans=0;
    
    for (int i=0;i<t;i++){
        int x;cin>>x;
        vector<int>v(x);
        
        for (int j=0;j<x;j++){
            cin>>v[j];
            if (v[j]==67){
                ans=1;
            }
        }
        if (ans==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        v.clear();
        ans=0;
    }
    
    
    
}

