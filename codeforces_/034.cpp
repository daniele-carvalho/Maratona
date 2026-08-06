//contest 2254 problema B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    for (int i=0;i<t;i++){
        int n; cin>>n;
        string s; cin>>s;

        vector<int>f(26);
        for (auto x: s){
            f[x-'a']++;
        }

        int j=1,pmenor=0;
        for (j=1;j<s.size()-1;j++){
            if (f[s[j]-'a']<f[s[pmenor]-'a']){
                pmenor= j;
            }
        }
        s.erase(pmenor,1);
        
        cout<<s<<endl;

        f.clear();

    }
}

//NAO TA CERTO AINDA.