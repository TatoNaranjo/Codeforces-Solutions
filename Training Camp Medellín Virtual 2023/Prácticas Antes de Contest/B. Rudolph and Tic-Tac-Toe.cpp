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
    char v[3][3];
    while(t--){
    f(i,0,3){
    f(j,0,3){
    char n; cin>>n;
    v[i][j]=n;
    }
    }
    char ans;
    //cruz
       if(v[0][0]==v[1][1] && v[0][0]==v[2][2]){
        ans = v[0][0];
    }
    else if(v[0][2]==v[1][1]&&v[0][2]==v[2][0]){
        ans = v[0][2];
    }

    //recta
    else if(v[0][0]==v[0][1]&& v[0][1]==v[0][2]){
        ans = v[0][0];
    }
     else if(v[1][0]==v[1][1]&&v[1][1]==v[1][2]){
        ans = v[1][0];
    }
     else if(v[2][0]==v[2][1]&&v[2][1]==v[2][2]){
        ans = v[2][0];
    }

    //fila
    else if(v[0][0] ==v[1][0]&&v[1][0]==v[2][0]){
        ans = v[0][0];
    }
     else if(v[0][1]==v[1][1]&&v[1][1]==v[2][1]){
        ans = v[0][1];
    }
     else if(v[0][2] ==v[1][2]&&v[1][2]==v[2][2]){
        ans = v[0][2];
    }
    else {
        cout<<"DRAW"<<endl;
        continue;
    }
    if(ans =='.')cout<<"DRAW"<<endl;
    else{
    cout<<ans<<endl;
}

    }
return 0;
}
