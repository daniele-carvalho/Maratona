#include <bits/stdc++.h>
using namespace std;



int main(){
    int n,s; cin>>n>>s;
    vector<pair<int, int>>v;

    if (n<3){
           cout<<"IMPOSSIBLE\n";
           return 0;
    }
    for(int i=0;i<n;i++){
           int in;cin>>in;
           v.push_back({in, i});
    }
    sort(v.begin(), v.end());
    
    for (int i=0;i<v.size()-2;i++){
           int j=i+1;
           int k=n-1;
           while(j<k){
                  if (v[i].first+v[j].first+v[k].first>s){
                         k--;
                  }else if (v[i].first+v[j].first+v[k].first<s){
                         j++;
                  }else{
                         vector<int>ans = {v[i].second+1,v[j].second+1, v[k].second+1};
                         sort(ans.begin(), ans.end());
                         cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
                         return 0;
                  }
           }
    }
    cout<<"IMPOSSIBLE\n";

}