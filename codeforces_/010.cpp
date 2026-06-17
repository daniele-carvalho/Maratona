//96A - Futebol.
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    int j=0,k=0;
    
    for (int i=0;i<s.size();i++){
        if (s[i] == '0'){
            j++;
        }
        if (s[i]!='0'){
            j=0;
        }
        if (s[i] == '1'){
            k++;
        }
        if (s[i]!='1'){
            k=0;
        }
        if (j>=7 || k>=7){
            break;
        }
    }
        if (j>=7||k>=7){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }