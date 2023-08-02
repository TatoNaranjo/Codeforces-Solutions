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
            bool isBread = false;
        int counter = 0;
        int p,q,j;
        cin>>p>>q>>j;
       while(p>0){
        if(!isBread){
            isBread = true;
             p--;
            counter++;
           // cout<<"Pone Pan"<<endl;
        }
         if(j==0 && q==0){
            break;
        }
        if(isBread&&q>0 && p>0){
            isBread = false;
            q--;
            counter++;
              //cout<<"Pone Queso"<<endl;
        }
        else if(isBread && j>0&& p>0){
            isBread = false;
             j--;
            counter++;
              //cout<<"Pone Jamon"<<endl;

        }

       }
       cout<<counter<<endl;

    }
return 0;
}
