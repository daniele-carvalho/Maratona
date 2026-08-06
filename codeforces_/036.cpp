//467A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,c=0;cin>>n;
    while(n--){
        cin>>x>>y;
        if ((y-x)>=2){
            c++;
        }
    }
    cout<<c<<endl;
}