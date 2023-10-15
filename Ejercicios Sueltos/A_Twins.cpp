#include <bits/stdc++.h>
using namespace std;

int main(){
    int a; cin>>a;
    vector<int>vec (a);
    for(int i = 0; i<a;i++)cin>>vec[i];
    sort(vec.begin(),vec.end());
    int sum = 0;
    int counter = 0;
    for(int i = a-1; i>=0;i--){
        sum+=vec[i];
        int sum2= 0;
        for(int j = 0; j<i;j++){
            sum2+=vec[j];
        }
       // cout<<sum<<" "<<sum2<<endl;
        if(sum>sum2){
            counter++;
            break;
        }
        else counter++;
    }
    cout<<counter<<endl;
    return 0;
}