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

    int n; cin>>n;

    if(n<=9){
    int sum = 0;
    while(n>-1){
        sum++;
        n--;
    }
        cout<<sum<<endl;
    }
    else{
       int sum = 0;
        int index = 1;
    while(n>-1){
        if(n-index>-1){
          n-=index;
         index++;
          sum++;
        }
        else if(n-index<0){
          index = 1;
        }

    }
cout<<sum<<endl;
    }

return 0;
}
