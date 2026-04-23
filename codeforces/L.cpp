#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>precos(2*n);

    for (int i=0;i<2*n;i++){
        cin>>precos[i];
    }

    sort(precos.begin(), precos.end());
    int soma=0;
    for (int i=1; i<2*n; i+=2){
        soma+= precos[i];
    }

    cout<<soma<<endl;
}