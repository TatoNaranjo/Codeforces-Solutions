#include <iostream>

using namespace std;

int main()
{
    int t,n,k,l,contdiasposibles,cont,contadoraux = 0;

    cin>>t;
    while(t--){
       //n = cantidad de dias
        //k = dias consecutivos
        //l = temperatura maxima
        cin>>n>>k>>l;
        int TempDias[n];

        for(int i=0;i<n;i++){
            cin>>TempDias[i];
        }
        //n = 3
        //k = 2
        //l = 10
        //TempDias = 3 0 15

        while(cont<n){
            for(int i=cont;i<n;i++){
                if(TempDias[i]<=l){
                    contadoraux++;
                    if(contadoraux == k){
                        contdiasposibles++;
                        contadoraux = 0;
                    }
                }else{
                    break;
                }
            }
            cont++;
            contadoraux = 0;
        }
        cout<<contdiasposibles<<endl;
        contadoraux = 0;
        contdiasposibles = 0;
        cont = 0;
    }
}
