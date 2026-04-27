#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>freq(4,0);
    vector<int>v(4);
    for (int i=0;i<4;i++){
        cin>>v[i];
    }
    for (auto x: v){
        freq[x-1]++;
    }
    int c=0;
    for (int i=0;i<4;i++){
        cout<<freq[i]<<" ";
        if (freq[i]>=2){
            c+=freq[i];
        }
    }
    cout<<c<<endl;
}
