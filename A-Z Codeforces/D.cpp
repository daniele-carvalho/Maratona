#include <bits/stdc++.h>
using namespace std;

bool ans (vector<int>&v){
        for (int i=0;i<4;i++){
            for(int j=0;j<i;j++){
                if (v[i]==v[j]){
                    return false;
                }
            }
        }
        return true;
}

int main(){
    int year; cin>> year;
    vector<int>v;
    for (int i=year+1;i<=10000;i++){
        v.push_back(i%10000/1000);
        v.push_back(i%1000/100);
        v.push_back(i%100/10);
        v.push_back(i%10);
        if (ans(v)){
            cout<<i;
            break;
        }
     v.clear();
    }
}

