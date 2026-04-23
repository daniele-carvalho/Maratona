    #include <bits/stdc++.h>
    using namespace std;
     
    //318A - EVEN ODDS
     
    int main(){
        long double n; unsigned long long k, ans=0;
        cin>>n>>k;
        
        double impares = (n/2);
        impares = ceil(impares);
        
        if (k<=impares){
            cout<<k*2-1<<endl;
        }
        
        if (k>impares){
            cout<<(long long)(k-impares)*2<<endl;
        }
    }
     
    /*  
        15 
        1 2 3 4 5 6  7  8  9 10 11 12 13 14 15
        1 3 5 7 9 11 13 15 2 4  6  8 10  12 14
        
        14 
        1 2 3 4 5 6 7 8 9 10 11 12 13 14
        1 3 5 7 9 11 13 2 4 6 8 10 12 14
    */