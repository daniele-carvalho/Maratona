#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>freq(4,0);
    int a; cin>>a;
    string b; cin>>b;
    for (auto x: b){
        freq[x-'A']++;
    }
    if (freq[0]>freq[3]){
        cout<<"Anton\n";
    }else if (freq[3]>freq[0]){
        cout<<"Danik\n";
    }else{
        cout<<"Friendship\n";
    }
}