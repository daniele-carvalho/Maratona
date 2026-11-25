//brute force - contar quantos diamantes podem ser expostos 
// q n tenham diferenca entre eles > y
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    int x,y; cin>>x>>y;
    vector<int>v(x);
    
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    
    int c=0;
    int m=0;
    sort(v.begin(), v.end());
    
    for(int i=0;i<x;i++){
        c=0;
        for(int j=i; j<x;j++){
            if (abs(v[i]-v[j])<=y){
                c++;
            }
        }
        m = max(m,c);
    }
 
    cout<<m<<endl;
}
