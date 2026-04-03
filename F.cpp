#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string s;
    while (n--){
        cin>>s;
        int t= s.size();
        if (t>10){
            cout<<s[0]<<t-2<<s[t-1]<<endl;
        }else{
            cout<<s<<endl;
        }
    }

}
