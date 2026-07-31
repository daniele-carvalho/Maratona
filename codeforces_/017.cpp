//59A word
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main(){
    string s;cin>>s;
    int ma=0, mi=0;
    for (int i=0;i<s.size();i++){
        if (s[i]>='A' && s[i]<='Z'){
            ma++;
        }else{
            mi++;
        }
    }
    
    if (ma>mi){
        for (int i=0;i<s.size();i++){
            s[i] = toupper(s[i]);
        }
    }else if (mi>=ma){
        for (int i=0;i<s.size();i++){
            s[i] = tolower(s[i]);
        }
    }
    cout<<string(s)<<endl;
}