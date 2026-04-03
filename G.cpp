#include <bits/stdc++.h>
using namespace std;

int main(){
    int l; cin>>l;
    vector<vector<int>>m(l, vector<int>(3));

    for (int i=0; i<l;i++){
        for (int j=0; j<3;j++){
            cin>> m.at(i).at(j);
        }
    }

    int c=0;
    int cl=0;
    for (int i=0; i<l;i++){
        for(int j=0;j<3;j++){
            if (m[i][j]==1){
                c++;
            }
        }
        if (c>1){
            cl++;
        }
        c=0;
    }
    cout<<cl<<endl;
}