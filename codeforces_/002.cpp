#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;cin>>s;
    int c=s.size()-1;
    
    for(int i=0;i<s.size();i++){
        if (s[i]!='+'){
            ans+=s[i];
        }
    }
    sort(ans.begin(),ans.end());
    
    for (int i=0;i<ans.size();i++){
        cout<<ans[i];
        if (i!= ans.size()-1)
        cout<<'+';
    }
    cout<<endl;   
}