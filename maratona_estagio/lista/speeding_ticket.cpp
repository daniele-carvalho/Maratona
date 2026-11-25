//simulacao - ver se passou do limite de velocidade e printar 
// o maior limite ultrapassado
#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n,m; cin>>n>>m;
    vector<int>v1;
    vector<int>v2;
    
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        for(int j=0;j<a;j++){
            v1.push_back(b);
        }
    }
    
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        for(int j=0;j<a;j++){
            v2.push_back(b);
        }
    }
  
    int maior=0;
    for(int i=0;i<100;i++){
        maior = max(maior, v2[i]-v1[i]);
    }
    cout<<maior<<endl;
}