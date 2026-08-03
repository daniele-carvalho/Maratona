// 2248 problem A - you delete, i delete
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        for (int i=0;i<s.size();i++){
            if (s[i]=='1'){
                s.erase(i,1);
                break;
            }
        }
        for (int i=0;i<s.size();i++){
            if (s[i]=='0'){
                s.erase(i,1);
                break;
            }
        }
        cout<<s<<endl;
    }
}