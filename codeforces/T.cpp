#include <bits/stdc++.h>
using namespace std;

int main(){
    string a; getline(cin,a);
    int c=0;
    vector<int>frq(26, 0);
    
    for (auto x:a){
        frq[x- 'a']++;
    }
    
    for (int i=0;i<frq.size();i++){
        if (frq[i]>0){
            c++;
        }
    }
    

    
    if (c%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
}