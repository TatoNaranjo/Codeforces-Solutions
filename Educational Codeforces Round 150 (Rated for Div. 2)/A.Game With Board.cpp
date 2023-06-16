#import <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b;i++)

using namespace std;

int main(){
int t; cin>>t;
f(i,0,t){
int n; cin>>n;
int ans = sqrt(16);
if(n<=ans)cout<<"Bob"<<endl;
if(n>ans)cout<<"Alice"<<endl;
}
}
