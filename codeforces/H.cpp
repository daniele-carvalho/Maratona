#include <bits/stdc++.h>
using namespace std;


int main(){
    int teste, t; cin>>teste;

    while(teste--){
        cin>>t;
        vector<int>permuta;
        vector<int>ans;

        for (int conta=1; conta<=3*t; conta++){
            permuta.push_back(conta);
        }
        
        for (int i=1, j=t*3; i<=t; i++, j-=2){
            ans.push_back(i);
            ans.push_back(j);
            ans.push_back(j-1);
        }
        
        for(int k=0;k<3*t;k++){
            cout<<ans[k];
            cout<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
