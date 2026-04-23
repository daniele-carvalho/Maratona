#include <bits/stdc++.h>
#include <cctype>
#include <cstring>
#include <ios>
#include <string>
using namespace std;

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    
    string p1, p2;
    
    for (int i=0;i<a.size();i++){
        p1+= toupper(a[i]);
    }
    for(int j=0;j<b.size();j++){
        p2+= toupper(b[j]);
    }
    
    if (p1<p2){
        cout<<"-1"<<endl;
    }else if (p2<p1){
        cout<<"1"<<endl;
    }else if (p1==p2){
        cout<<"0"<<endl;
    }
    
}