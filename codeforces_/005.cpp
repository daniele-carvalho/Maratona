//MFP 2025 - F 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,i,k;cin>>n>>i>>k;
    int conta = (k)%(n-1);
    int conta2 = (i+conta)%n;
    cout<<conta2+1<<endl;
}
