#import <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)

using namespace std;

int main(){
int t; cin>>t;
f(i,0,t){
string n; cin>>n;
if(n[0]+n[1]+n[2]==n[3]+n[4]+n[5])cout<<"YES"<<endl;
else cout <<"NO"<<endl;
}
return 0;

}
