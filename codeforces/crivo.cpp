#include <bits/stdc++.h>
using namespace std;
//algoritmo crivo de eratostenes.

bool crivo (int n, vector<bool>&v){
    int aux= sqrt(n);
    for (int i=2;i<=aux;i++){
        if (v[i]){
            for (int j=i*i;j<=n;j+=i){
                v[j]=false;
            }
        }
    }
    v[0]= v[1] = false;
    
    if (v[n]==1)
        return 1;
    else
        return 0;
}

int main(){
    int n; cin>>n;
    vector<bool>primos(n+1, true);
    crivo(n, primos);
    if (primos[n]){
        cout<<"PRIMO\n";
    }else{
        cout<<"NAO PRIMO\n";
    }
}