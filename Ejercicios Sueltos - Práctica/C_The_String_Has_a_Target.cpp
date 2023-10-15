#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int l; cin>>l;
        string a; cin>>a;
        string ans = "";
        string temp = a;
        bool cond = false;
        while(!cond){
            int swapPos = -1;
            
            for(int i = 1;i<l-1;i++){
                if(a[i]<=a[i-1]){
                    swapPos = i;
                    break;
                }
            }
            
            if(swapPos != -1){
            for(int i = 0; i<l;i++){
                if(temp[i]>temp[swapPos]){
            swap(temp[i],temp[swapPos]);
            break;
                }
            }
            if(temp>ans)ans=temp;
            else break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}