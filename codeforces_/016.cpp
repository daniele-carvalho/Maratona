//546A - soldier and bananas
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,r=0,z;cin>>x>>y>>z;
    for (int i=1;i<=z;i++){   
        r += x*i;
    }
    if (r>y)
    cout<<r-y<<endl;
    else
     cout<<0<<endl;
}