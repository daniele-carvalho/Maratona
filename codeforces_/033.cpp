//116A codeforces
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<pair<int, int>>v(n);
    int f=0;
    
    for (int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    
    int maior=0;
    int s= v[0].second;
    for (int j=0;j<n-1;j++){
        maior= max(maior, s);
        f = v[j].second - v[j+1].first;
        s = f + v[j+1].second;
        v[j+1].second=s;
    }
    
    if (maior==0 && v[0].second==1){
        cout<<"1\n";
    }else{
        cout<<maior<<endl;
    }
}