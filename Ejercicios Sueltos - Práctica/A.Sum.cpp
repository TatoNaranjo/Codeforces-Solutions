#import <bits/stdc++.h>

using namespace std;

int main(){
int t = 0; cin>>t;
while(t--){
    int a,b,c; cin>>a>>b>>c;
    if(a+b==c||a+c==b||b+a==c||b+c==a)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

return 0;
}

