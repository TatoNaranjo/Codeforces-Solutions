#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int l; cin>>l; 
        string a; cin>>a;
        string b = "";
        string ans = a;
        for(int i = 1;i<l;i++){
            b = a[i];
            for(int j = 0; j<l;j++){
                if(j!=i)b+=a[j];
            }
          //  cout<<b<<endl;
            if(b < ans)ans = b;
        }   
    cout<<ans<<endl;
    }

    return 0;
}