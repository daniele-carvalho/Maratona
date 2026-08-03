//maratona unioeste - 1 contest 2026 - problema b
#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,m,g; cin>>d>>m>>g;
    int falta = d - (m+g);
    int maior=0;
    m>g? maior=m:maior=g;
    falta>maior? maior=falta:maior=maior;

    cout<<maior<<endl;
}