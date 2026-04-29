#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,p1,p2;cin>>s;

    for (int i=0,j=1;i<s.size(),j<s.size();i+=2,j+=2){
        p1+=s[i];
        p2+=s[j];

    }
    cout<<p1<<endl<<p2;
}
