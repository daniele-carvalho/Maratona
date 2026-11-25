#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    int m, n, k; cin>>m>>n>>k;
    vector<string>s(m);

    for (int i=0;i<m;i++){
        cin>>s[i];
    }
    
    for (int i=0;i<m;i++){
        for(int x=0;x<k;x++){
            for(int j=0;j<n;j++){
                for(int z=0;z<k;z++){
                cout<<s[i][j];
                }
            }
            cout<<endl;
        }
    }
}
