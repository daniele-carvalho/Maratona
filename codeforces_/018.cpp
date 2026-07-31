//579A raising bacteria
#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main(){
    int x, cont=0;cin>>x;
    string s= bitset<64>(x).to_string();
    for (int i=0;i<s.size();i++){
        if (s[i]=='1'){
            cont++;
        }
    }
    cout<<cont<<endl;
}