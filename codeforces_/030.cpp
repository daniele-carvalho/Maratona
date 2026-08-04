//677A Vanya and Fence
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h; cin>>n>>h;
    vector<int>v(n);
    int c=0;
    for (int i=0;i<n;i++){
        cin>>v[i];
        if (v[i]<=h){
            c++;
        }else{
            v[i]/= 2;
            if (v[i]<=h){
            c+=2;
            }
        }
    }
    cout<<c<<endl;
}
