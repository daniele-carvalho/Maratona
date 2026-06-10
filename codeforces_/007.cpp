//617A
#include <bits/stdc++.h>
#include <type_traits>
using namespace std;
int main (){
    int n, x=0;cin>>n;
    vector<int>v = {1,2,3,4,5};
    while (n!=0 && n>=5){
        n-=5;
        x++;
    }
    while (n!=0 && n>=4){
        n-=4;
        x++;
    }
    while (n!=0 && n>=3){
        n-=3;
        x++;
    }
    while (n!=0 && n>=2){
        n-=2;
        x++;
    }
    while (n!=0 && n>=1){
        n-=1;
        x++;
    }
    cout<<x<<endl;
    
}
