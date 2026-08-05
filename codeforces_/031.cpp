//contest 2254- A) Riptide
// ENVIAR SOLUCAO NO CODEFORCES QND ABRIR
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c, j=0; cin>>t;
    for (int i=0;i<t;i++){
        cin>>a>>b>>c;
        vector<int>v(3);
        v[0]=a;v[1]=b;v[2]=c;
        while(true){
            sort(v.begin(), v.end());
            if (v[0]==v[1] || v[0]==v[2] || v[1]==v[2]){
                break;
            }
            v[2]--;
            v[0]++;
            j++;
        }
        cout<<j<<endl;
        j=0;
    }
}
