    #include <bits/stdc++.h>
    #include <cmath>
    using namespace std;
    #define ll long long
    //230B - T-primes
     
    bool ehprimo (long long x){
        if (x<=1) return false;
     
        for (int i=2;i<=sqrt(x);i++){
            if (x%i==0){
                return false;
            }
        }
        return true;
    }
    int main(){
        ll t, x; cin>>t;
        
        for (int i=0;i<t;i++){
            cin>>x;
            ll raiz = sqrt(x);
            if (x%2==0 && x>4){
                cout<<"NO"<<endl;
            }else if (ehprimo(x)){
                    cout<<"NO"<<endl;
            }else if (raiz*raiz==x && ehprimo(raiz)){
                    cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    /*Nao pode ser um numero primo nem um par >4
     * 4 - 1 2 4
     * 25 - 1 5 25 
     * 49 - 1 7 49
     * 121 - 1 11 121
     * Relacao: numeros cujo a raiz quadrada eh um numero primo
     * Duvida: como achar numeros primos efetivamente pra numeros grandes
     *APRENDER ALGORITMO DE CRIVO PRA ACHAR PRIMOS AMANHA.
     */