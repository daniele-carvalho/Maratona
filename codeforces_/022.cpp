//codeforces 43A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    map<string,int>m;
    string s;
    for (int i=0;i<n;i++){
        cin>>s;
        m[s]++;
    }

    int maior=0;
   string resultado;;
    for (auto x: m){
        if (x.second>maior){
            resultado= x.first;
            maior= x.second;
        }
    }
    cout<<resultado<<endl;
}