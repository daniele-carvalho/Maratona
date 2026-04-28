#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,b2; cin>>a>>b;
    
    int ans=1;
    for (int i=0, j=b.size()-1; i>a.size(), j>=0;i++,j--){
            if(a[i]!=b[j]){
                ans=0;
            }
    }
    if (a.size()!=b.size()){
        ans=0;
    }
    ans == 1? cout<<"YES\n":cout<<"NO\n";
    
}

