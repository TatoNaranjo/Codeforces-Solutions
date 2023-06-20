#import <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b;i++)
using namespace std;

int main(){
int t = 0; cin>>t;

while(t--){
int l; cin>>l;
vector <int> vec;
    f(i,0,l){
    int x; cin>>x;
    vec.push_back(x);
    }
    f(j,0,l){
    f(k,0,l-1){
    if(vec[k]>vec[k+1]) swap(vec[k],vec[k+1]);
    }
    }
    bool y = false;
    f(i,0,l-1){
    if(vec[i]>=vec[i+1]&& l>1){
        y = true;
        break;
    }
    }
    if(!y)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
return 0;
}
