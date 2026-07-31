#include <bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    map<string, int>m;
    string nome;
    int n; cin>>n;
    for (int i=0;i<n;i++){
        cin>>nome;
        m[nome]=0;
        if (m.count(nome)){
            m[nome]++;
        }
    }
    for (auto x: m){
        if (x.second>0){
            cout<<x.first<<endl;
        }else{
        cout<<x.first<<x.second; 
        }
    }
}