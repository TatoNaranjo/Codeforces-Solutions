#import <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b;i++)
using namespace std;
int main(){
int t; cin>>t;
f(i,0,t){

string a; cin>>a;
string b; cin>>b;
//cout<<a<<endl;

string c = "";
f(i,0,a.size()){
    c+=a[i];
}
f(i,0,b.size()){
    c+=b[i];
}
//cout<<c<<endl;
sort(c.begin(),c.end());
cout<<c<<endl;

}

return 0;
}
