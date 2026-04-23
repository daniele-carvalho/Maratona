#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    vector<int>v (26, 0);
    string a; getline(cin,a);
    
    for (auto x: a){
        if (isalpha(x))
        v[x-'a']++;
    }
    
    int c=0;
    
    for (int i=0;i<26; i++){
        cout<<v[i]<<" ";
        if (v[i]>0){
            c++;
        }
    }
    cout<<c<<endl;
}