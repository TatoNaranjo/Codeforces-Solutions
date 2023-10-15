#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string a; cin>>a;
        if(a[0]=='c'||a[2]=='a' || a[2]=='a'&&a[0]!='c')cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}