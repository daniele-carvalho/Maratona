#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    vector<int>pontos(n);
    for (int i=0;i<n;i++){
        cin>>pontos[i];
    }

    int cont0=0;
    int soma=0;
    for (int j=0;j<n;j++){
        if (pontos[j]>=pontos[k-1] && pontos[j]>0){
            soma+=1;
        }
    }

    cout<<soma<<endl;
}