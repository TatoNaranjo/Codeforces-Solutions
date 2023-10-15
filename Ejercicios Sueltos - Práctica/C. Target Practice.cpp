#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long ans = 0;
        string x; cin>>x;
         for(int i = 0;i<=11;i++){
            for(int j = 0; j<x.size();j++){
                if(x[j]=='X'){
                    if(i==0||i==9)ans++;
                    if(i==1||i==8)ans+=2;
                    if(i==2||i==7)ans+=3;
                    if(i==3||i==6)ans+=4;
                    if(i==4||i==5)ans+=5;
                }
            }
         }
         cout<<ans<<endl;

    }
  
    


    return 0;
}