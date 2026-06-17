#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int m,n,a; cin>>m>>n>>a;
    int a1=a,a2=a;
    while(a1<m){
        a1+=a; 
    }
    a1 = a1/a;
    
    while(a2<n){
        a2+=a;
    }
    a2=a2/a;
    
    cout<<(long long)a1*a2<<endl;
}