//maratona unioeste - 1 contest 2026 - problema c
#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c; cin>>a>>b>>c;
    float ans = (b/a)-c;
    if (ans<1){
        cout<<0<<endl;
    }else{
    printf("%.1f\n", ans);
    }
}