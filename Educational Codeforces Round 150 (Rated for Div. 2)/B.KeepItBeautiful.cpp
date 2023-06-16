#import <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
using namespace std;
int main(){
int t; cin>>t;
f(i,0,t){
int l; cin>>l;
int last = -1;
int first = -1;
int flag = 0;
string ans = "";
f(j,0,l){
int n; cin>>n;
if (flag){
    if(last <=n && n<=first){
        ans+='1';
        last = n;
    }
    else{
        ans+='0';
    }
}
else{
if(first ==-1){
    last = n;
    first =n;
    ans += '1';
}
else if (last<=n){
    last = n;
    ans +='1';
}
else if(n<=first){
    flag=1;
    last = n;
    ans += '1';
}
else ans +='0';

}
}
cout<<ans<<endl;
}
return 0;
}
