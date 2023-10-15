#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        
        int l; cin>>l;
        vector<int>vec(l);
        long long counter = 0;
        for(int i = 0; i<l;i++)cin>>vec[i];
        for(int i = 0; i<l;i++){
            vec[i] = -vec[i];
            if(accumulate(vec.begin(),vec.end(),0)%2==0)counter++;
            vec[i]=-vec[i];
        }
    cout<<counter<<endl;
    }

    return 0;
}