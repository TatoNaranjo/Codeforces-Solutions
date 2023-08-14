#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define us(a,b) unordered_set<a> b;
#define pb push_back
#define fast_io                                                                \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

int charsdistintos(string str){
    us(char,charsDif);
    for(char g: str){
        charsDif.insert(g);
    }
    return charsDif.size();
}

int main(){
  fast_io;
    int t; cin>>t;
    while(t--){
       int l; cin>>l;
       string str; cin>>str;
       //Un contador de frecuencias para chars;
       v(int,contadorVeces) (26,0);
       //Cuantas veces he pasado por la letra;
       v(int, procesoLetras) (26,0);
       //Mapear cada letra de ascii a una posición en el abecedario de 0 a 25;
       for(char g: str)contadorVeces[g-'a']++;
        int ans = 0;

        //Por cada letra en str:
       for(char g:str){
        //Disminuyo el registro de cuantas veces he contado la letra;
        contadorVeces[g-'a']--; 
        //Aumento el registro de cuantas veces he procesado la letra;
        procesoLetras[g-'a']++;
        //Cuantos caracteres diferentes hay?;
        int charDif = 0;
        //Recorro el abecedario contando cuantas veces ha aparecido la palabra en str
        //Esos contadores se suman al contador de chars diferentes.
        f(i,0,26){
            charDif+=min(1,contadorVeces[i]) + min(1,procesoLetras[i]);
        }
        //Actutalizo y almaceno la mayor cantidad de letras diferentes que aparecen por substring
        ans = max(ans,charDif);
       }
       cout<<ans<<endl;
    }
return 0;
}