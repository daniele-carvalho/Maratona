//58A
#include <bits/stdc++.h>
using namespace std;

int main (){
    string s; cin>>s;
    int h=0,e=0,l1=0,o=0;

    for (int i=0;i<s.size();i++){
        if (s[i]=='h'){
            h = 1;
        }
        if (s[i]=='e'){
            if (h){
                e =1;
            }
        }
        if (s[i]=='l'){
            if (h && e){
                l1++;
            }
        }
        
        if (s[i]=='o'){
            if (h && e && l1){
                o =1;
            }
        }
    }
    if (h && e && l1>1 && o){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}