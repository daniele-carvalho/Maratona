//icpc 2025 - health menu
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>> v(n, vector<int>(m));
    
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int result=0;
    
    int maior=0;
    for(int j=0;j<m;j++){
        for (int i=0;i<n;i++){
            maior = max(maior, v[i][j]);
        }
        result+=maior;
        maior=0;
    }
    cout<<result<<endl;
}