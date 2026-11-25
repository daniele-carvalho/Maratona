#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    int p,m,g; cin>>p>>m>>g;
    if (p==1 || m==1){
        cout<<g<<endl;
        return 0;
    } else{
        int imax = floor(g/p);
        int jmax = floor(g/m);
        int somaatual=0;
        int maior=0;
        for (int i=0; i<=imax;i++){
            for(int j=0;j<=jmax;j++){
                somaatual = (i*p)+(j*m);
                if (somaatual>maior && somaatual<=g){
                    maior=somaatual;
                }
            }
        }
        cout<<maior<<endl;
    }
}