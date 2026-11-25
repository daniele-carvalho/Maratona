#include <bits/stdc++.h>
using namespace std;
//dois ponteiros

int main(){
    int n; cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    vector<string>s;
    
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==j) continue;
            s.push_back(v[i]+v[j]);
        }
    }

    int cont=0;
    
    for (auto x: s){
        int pal=1;
        for (int i=0, j=x.size()-1; i<j; i++,j--){
            if (x[i]!=x[j]){
                pal=0;
                break;
            }
        }
        if (pal==1) cont++;
    }
    cout<<cont<<endl;
}
