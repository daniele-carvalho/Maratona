    #include <bits/stdc++.h>
    using namespace std;
    const long long MAX =  1e6+1;
    #define ll long long
    //230B - T-primes

    void crivo (vector<bool>&v){
        v[0]=v[1]=false;

        for (int i=2;i*i<=MAX;i++){
            if (v[i]){
                for (int j=i*i;j<MAX;j+=i){
                    v[j]=false;
                }
            }
        }
    }

    int main(){
        ll t, x; cin>>t;
        vector<bool>v(MAX, true);
        crivo(v);
        for (int i=0;i<t;i++){
            cin>>x;

            ll raiz = sqrtl(x);
            
            if (raiz*raiz==x && v[raiz]){
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
