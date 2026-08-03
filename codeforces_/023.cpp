//maratonaunioeste - 1 contest 2026 - problema a
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    a1*=a2;
    b1*=b2;
    if (a1==b1) 
        cout<<0<<endl;
    else if (a1>b1)
        cout<<"-1\n";
    else
        cout<<1<<endl;
}