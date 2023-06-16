#import <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b;i++)
using namespace std;

int main(){
int t; cin>>t;
f(i,0,t){
    int n; cin>>n;
    int bag[n];
    int mC = 0;
    int bC = 0;

    f(j,0,n){
    cin>>bag[j];
    }
    f(j,0,n){
    if(bag[j]%2==0){
        int temp = bag[0];
        bag[0] = bag[j];
        bag[j] = temp;
        break;
    }
    }
   // f(m,0,n){
   // cout<<"Bag: "<<bag[m]<<endl;
   // }

    f(k,0,n){
    if(bag[k]%2 ==0)mC+=bag[k];
    else bC += bag[k];
    }

   // cout<<"Mihail Candies: "<<mC<<endl;
    // cout<<"Bianca Candies: "<<bC<<endl;
        if(mC>bC)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }

}
