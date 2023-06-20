#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)

using namespace std;

int main(){
int n; cin>>n;
if(n==1)cout<<"I hate it"<<endl;
else{
string ans = "I hate that ";
f(i,0,n-1){
if(i%2!=0){
 ans+= "I hate ";
}
else{
    ans+="I love ";
}
if(i<n-2){
ans+="that ";
}
}
ans+="it";

cout<<ans<<endl;
}
return 0;
}
