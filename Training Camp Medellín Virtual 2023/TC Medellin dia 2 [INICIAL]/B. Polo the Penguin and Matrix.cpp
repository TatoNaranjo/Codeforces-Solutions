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
    int maxi,m,n,aum = 0; cin>>m>>n>>aum;
     maxi = 1;
    int steps = 0;
    int vec[m][n];
    f(i,0,m){
    f(j,0,n){
    int x; cin>>x;
    maxi = max(maxi,x/100);
    vec[i][j]=x;

    }

    }
    //  cout<<maxi<<endl;
    f(i,0,m){
    f(j,0,n){
    if(vec[i][j]!=maxi){
        if(vec[i][j]+aum>maxi && vec[i][j]-aum<maxi){
            steps =-1;
            break;
        }
        else{
            while(vec[i][j]!=maxi){
                if(vec[i][j]<maxi){
                     vec[i][j]+=aum;
                steps++;
                }
             else{
                 vec[i][j]-=aum;
                steps++;

             }
            }

        }

    }
    }
    if(steps==-1)break;
    }
    cout<<steps<<endl;
return 0;
}
