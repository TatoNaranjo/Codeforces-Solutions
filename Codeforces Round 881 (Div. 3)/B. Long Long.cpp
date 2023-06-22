#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define ll long long
#define v(a,b) vector<a> b

using namespace std;

int main(){
int t = 0; cin>>t;
while(t--){
    int l; cin>>l;
    v(int,vec);
    f(i,0,l){
    int x; cin>>x;
    vec.push_back(x);
    }
    int a = 0;
    int b = 0;
    int counter = 0;

    f(j,0,l){
        bool y = false;
    if(vec[j]<0){
      a = j;
      b = j;
    } else continue;
    f(k,a+1,l){
        if(vec[k]<=0)b++;
        else break;
              }
 j = b+1;

    for(int m = a; m<=b;m++){
       vec[m] = abs(vec[m]);
        y = true;
    }

    if(y)counter++;

 //   cout<<a<<" "<<b<<endl;
    }


    ll sum = 0;
    f(p,0,l){
    sum+=vec[p];
    }
    cout<<sum<<" "<<counter<<endl;
}

return 0;
}
