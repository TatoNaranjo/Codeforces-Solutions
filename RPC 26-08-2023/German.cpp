#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define pb push_back
#define fast_io                                                                \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

int main(){
  fast_io;
   string num; cin>>num;
   int ans = 0;
   if(num.size()==1){
    cout<<num[0]-'1'+2;
   }
   else{
    ans = (num.size()-1)*10;
    ans+=num[0]-'1';
    if(num[1]-'1'> num[0]-'1'){
        ans++;
    }
    else if (num[1]-'1'==num[0]-'1'){
        ans++;
        f(i,0,num.size()){
            if(num[i]-'1'<num[1]-'1'){
                ans--;
                break;  
            }
        }
    }
    cout<<ans;

   }

return 0;
}