//230A codeforces
#include <bits/stdc++.h>
using namespace std;

int main(){
    int f,n; cin>>f>>n;
    int ans=1;
    vector<pair<int, int>>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end());

    for (int j=0;j<n;j++){
        if (f>v[j].first){
            f+=v[j].second;
        }else{
            ans=0;
            break;
        }
    }
    
    if (ans==1){
        cout<<"YES\n";
    }else{
        cout<<"NO"<<endl;
    }
}