#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int l; cin>>l;
       vector<int>vec(l);
       int indMin = 0;
       int mini = INT_MAX;
       for(int i = 0;i<l;i++){
        cin>>vec[i];
        if(vec[i]<mini){
            mini = vec[i];
            indMin = i;
        }
       }
    vec[indMin]++;
    long long ans = vec[0];
    for(int i = 1;i<l;i++){
    ans*=vec[i];
    }
      cout<<ans<<endl;
    }
  
    


    return 0;
}