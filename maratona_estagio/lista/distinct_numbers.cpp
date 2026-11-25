#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    set<int>v;

    int i=0;
    while(n--){
        int x; cin>>x;
        v.insert(x);
    }

    cout<<v.size()<<endl;
}