#include <bits/stdc++.h>
using namespace std;

//x tamanho
//y superpoder

int main(){
    int t,total=0; cin>>t;
    for (int i=0;i<t;i++){
        int x,y; cin>>x>>y;
        
        for(int j=0;j<x;j++){
            int z;cin>>z;
            total+=z;
        }
        //cout << "total = " << total << endl;
        if (total%2==0){
            //cout<<"TOTAL É PAR"<<endl;
            if ((x*y)%2 == 0){
                //cout<<"SUPERPODER DEIXA PAR"<<endl;
                cout<<"YES"<<endl;
            } else {
                //cout<<"SUPERPODER DEIXA IMPAR"<<endl;
                cout<<"NO"<<endl;
            }
        }else{
            //cout<<"TOTAL É IMPAR"<<endl;
            cout<<"YES"<<endl;
        }
        total=0;
    }
}