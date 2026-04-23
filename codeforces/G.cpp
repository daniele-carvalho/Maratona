#include <bits/stdc++.h>
using namespace std;

//bits++
int main(){
    int n; cin>>n;
    int x=0;
    
    for (int i=0;i<n;i++) {
        string p; cin>>p;

        for (int j=0;j<3;j++){
            if (p[j] == '+'){
                x++;
                break;
            } else if (p[j] == '-'){
                x--;
                break;
            }
        }
    }
    cout<<x<<endl;
}