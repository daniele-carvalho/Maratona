//344A - Codeforces
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0; cin>>n;
    string s; cin>>s;
    string s1;
    for(int i=0;i<n-1;i++){
        cin>>s1;
        if (s1!=s){
            c++;
        }
        s = s1;
    }

    cout<<c+1<<endl;
    
}