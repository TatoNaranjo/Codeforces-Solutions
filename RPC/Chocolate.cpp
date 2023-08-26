//Upsolving Chocolate Chip Fabrication.
//By TatoNaranjo & FelipeOP

//Encuentra el numero minimo de movimientos para reducir todas las casillas a '-'
#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define pb push_back
#define fast_io                                                                \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

string s[1010];
pair<int,int>p;
stack<pair<int,int>>st;

int main(){
  fast_io;

//Recibimiento de Variables
    int  n,m;
    cin>>n>>m;
    f(i,0,n)cin>>s[i];
    int nn = 0;
    f(i,0,n){
        f(j,0,m){
            if(s[i][j]=='-')nn++;
        }
    } 
//Si todas las casillas están vacias devuleves 0. 
    if(nn==n*m){
        cout<<0<<endl;
        return 0;
    }

    int num = 0, res = 0;
    //Hasta que todas las casillas sean un -.
    while(true){
        //EL Loop infinito se cumple hasta que todas las casillas estén vacías.
        if(num == n*m)break;
        num = 0;
        //Si alguna casilla está vacía, el contador de casillas recorridas aumenta.
        
        //Por cada elemento en el vector.
        f(i,0,n){
            f(j,0,m){
                if(s[i][j]=='-')num++;
                //Si una casilla tiene una X entonces procedemos a seguir los siguientes pasos:
                if(s[i][j]=='X'){
                    //si alguna X se encuentra en el borde del arreglo se pushea la posición exacta a una pila de pares.
                    if(i==0||j==0||i==n-1||j==m-1){
                        st.push({i,j});
                        num++;
                    }
                    //Si alguna X tiene una casilla vacía en una posición adyacente se pushea la posición exacta a una pila de pares (i,j).
                    else{
                        if(s[i-1][j]=='-'||s[i][j-1]=='-'||s[i+1][j]=='-'||s[i][j+1]=='-'){
                            st.push({i,j});
                            num++;
                        }
                    }
                }
            }
        }
        //Hasta que la pila esté totalmente vacía:
        while(!st.empty()){
            //Inicializas una variable con el valor del ultimo elemento de la pila
                p = st.top();
                //Eliminas el primer elemento de la pila.
                st.pop();
                //La Casilla en el vector S correspondiente al ultimo elemento de la pila se vuelve una casilla vacía
                s[p.first][p.second]='-';
            }
            //aumentas el contador de ciclos.
            res++;
    }

    //Cuántos ciclos minimos tuviste que hacer para vaciar todas las casillas?
     cout<<res;
return 0;
}
