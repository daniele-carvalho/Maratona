#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    
    while(n--){
        int x,y,z; cin>>x>>y>>z;
        int maior = max(x, max(y,z));
        int menor = min(x, min(y,z));
        int meio = x+y+z - (maior+menor);
        
        menor++;
        maior--;
        
        if (maior==menor==meio){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}