//codeforces 110A
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    long long n,c=0;cin>>n;
    string s= to_string(n);

    for (int i=0;i<s.size();i++){
        if (s[i]=='7'){
            c++;
        }
        if (s[i]=='4'){
            c++;
        }
    }
    if (c==4 || c==7){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}