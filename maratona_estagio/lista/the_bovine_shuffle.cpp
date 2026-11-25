#include <bits/stdc++.h>
using namespace std;

int main(){      

       freopen("shuffle.in", "r", stdin);
       freopen("shuffle.out", "w", stdout);

    int n;cin>>n;
   
    vector<int>ini(n+1); //ordem inicial
    vector<int>v(n+1); //vetor final
    vector<int>u(n+1); //vetor 
    
    v[0] = u[0] = ini[0] = 0;
    for(int i=1;i<=n;i++){ //le a ordem inicial
        cin>>ini[i];
    }
    
    for(int i=1;i<=n;i++){ //le a ordem final
        cin>>v[i];
    }
    
    for(int j=0;j<3;j++){
        for(int i=1;i<=n;i++){
            u[i] = v[ini[i]]; //vetor novo [i] = vfinal[posicaoinicial[i]]
        }
        v = u;
    }
    
    for(int i=1;i<=n;i++){
        cout<<v[i]<<endl;
    }
}