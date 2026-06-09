//96A Codeforces 
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int c=0, c1=0;
    for (int i=s.size(); i>0;i--){
        if (s[i]==s[i-1]){
            c++;
        
        }
        cout<<c;
    }
    cout<<"c: "<<c<<endl;
    if (c>=7 || c1>=7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}