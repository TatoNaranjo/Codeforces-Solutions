#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define ll long long


using namespace std;

int main(){
int t = 1; cin>>t;

while(t--){
    int l; cin>>l;
    int ans = 0;
    vector<int> vec;
    f(i,0,l){
    int x; cin>>x;
    vec.push_back(x);
    }
    f(j,0,l){
    f(k,0,l-1) if(vec[k]>vec[k+1])swap(vec[k],vec[k+1]);
    }
   //  f(i,0,vec.size())cout<<vec[i]<<" ";
    int a = l-1;
    int b = 0;
    while(a>b){
        ans += (vec[a]-vec[b]);
        a--;
        b++;
    }

cout<<ans<<endl;
}

return 0;
}
