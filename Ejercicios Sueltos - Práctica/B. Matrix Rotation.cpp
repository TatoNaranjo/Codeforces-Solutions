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
    int t; cin>>t;
    while(t--){
        int vec[2][2];
        f(i,0,2){
            f(j,0,2){
            cin>>vec[i][j];
            }
        }
    int tempVec[2][2];
    f(i,0,2){
    f(j,0,2){
    tempVec[i][j]=vec[i][j];
    }
    }
    int temp = 0;
    int temp2 = 0;
    int rotations = 0;
    bool check = false;
    while (!check){
    if(tempVec[0][0]<tempVec[0][1]&& tempVec[1][0]<tempVec[1][1]&&tempVec[0][0]<tempVec[1][0]&&tempVec[0][1]<tempVec[1][1])check = true;
    else{
    temp = tempVec[0][1];
    tempVec[0][1]=tempVec[0][0];
    temp2 = tempVec[1][1];
    tempVec[1][1]= temp;
    temp = tempVec[1][0];
    tempVec[1][0]=temp2;
    tempVec[0][0]=temp;
  //  f(i,0,2){
   // f(j,0,2){
 //   cout<<tempVec[i][j]<<" ";
  //  }
  //  cout<<endl;
 //   }
  rotations++;
    if(rotations==4)break;
    }

    }
if(check)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

    }
return 0;
}
