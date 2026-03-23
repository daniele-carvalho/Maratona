#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int x;
    for (int i=0;i<10;i++){
        cin>>x;
        v.push_back(x);
    }

    for (int i=9;i>=0;i--){
        cout<<v[i]<<endl;
    }
}

//COMPLEXIDADE: O(n)