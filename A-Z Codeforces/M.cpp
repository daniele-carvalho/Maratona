#include <bits/stdc++.h>
using namespace std;
//QUESTAO MARATONA UNIOESTE SELETIVA
int main(){
    int n; cin>>n;
    vector<int>celas(n);
    for (int i=0;i<n;i++){
        cin>>celas[i];
    }
    sort(celas.begin(), celas.end());

    int gap=0, gap2=0,maior=0;
    for (int i=0;i<n-1;i++){
        gap = (celas[i+1])-(celas[i]);
        maior=max(gap, maior);
    }
    gap2 = (celas[0]+360)-(celas[n-1]);
    maior= max(gap2, maior);
    int ans= (360-(maior))+1;

    cout<<ans<<endl;
}