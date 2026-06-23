//122A - Lucky Division
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    int n;cin>>n;
    string numero = to_string(n);
    vector<int>v4={4,44,444, 47, 477,474};
    vector<int>v7={7, 77,74,744, 774, 747};
    bool div = 0;
    
    for (int i=0;i<v4.size();i++){
        if (n%v4[i] == 0|| n%v7[i]==0){
            div=1;
        }
    }
    if (div){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}