// https://usaco.org/index.php?page=viewproblem2&cpid=891

#include <bits/stdc++.h>
using namespace std;

int main(){

    //nao tava passando, usaco pediu pra colocar isso: 
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    // 
    
    int n;cin>>n;
    vector<int>p;
    vector<int>ini{0,1,2,3};
    for (int i=0;i<n;i++){
        int a,b,g; cin>>a>>b>>g;
        swap(ini[a], ini[b]);
        p.push_back(ini[g]);
    }

    vector<int>f(4);
    for(auto x: p){
        f[x]++;
    }
    
    int maior=0;
    for(int i=0;i<f.size();i++){
        maior = max(maior, f[i]);
    }
    cout<<maior<<endl; 
}