#import <bits/stdc++.h>
#define f(i,a,b) for(int i = a;i<b;i++)
using namespace std;

int main(){

int t; cin>>t;
f(i,0,t){
string a; cin>>a;
transform(a.begin(),a.end(),a.begin(),::tolower);
if(a == "yes") cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}
