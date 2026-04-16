#include <bits/stdc++.h>
using namespace std;
//algoritmo crivo de eratostenes.

bool crivo (int n, vector<bool>v){
    int aux= sqrt(n);
    for (int i=2;i<=aux;i++){
        if (v[i]){
            for (int j=i*i;j<=n;j+=i){
                v[j]=false;
            }
        }
    }
    if (n==0 || n==1){
        return 0;
    }else if (v[n]==1){
        return 1;
    }
    return 0;
}

int main(){
    int n; cin>>n;
    vector<bool>primos(n+1, true);
    if (crivo(n, primos)){
        cout<<"primo";
    }else{
        cout<<"naoprimo";
    }
}