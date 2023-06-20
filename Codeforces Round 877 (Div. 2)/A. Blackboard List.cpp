#import <bits/stdc++.h>
#define f(i,a,b) for(int i = a;i<b;i++)

using namespace std;

int main(){

int t; cin>>t;
f(i,0,t){
int l; cin>>l;
int num[l];
int ans = 0;
f(j,0,l){
cin>>num[j];
}

f(a,0,l){
if(num[a]<0){
  ans = num[a];
  break;
}
else ans = max(ans,num[a]);

}
cout<<ans<<endl;
}
return 0;
}
