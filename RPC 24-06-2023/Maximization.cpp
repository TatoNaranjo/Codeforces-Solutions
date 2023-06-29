#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define pb push_back

using namespace std;

int main(){
string t; cin>>t;
f(i,0,t.size()-1){
f(j,0,t.size()){
if(t[j]<t[j+1]){
    char temp = t[j];
    t[j] = t[j+1];
    t[j+1] = temp;

}
}
}
cout<<t<<endl;
return 0;
}
