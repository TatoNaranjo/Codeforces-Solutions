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

int main()
{
    fast_io;
    ll t;
    cin>>t;
    while(t--)
    {
        string n;
    cin>>n;
    ll l=n.length();
    n='0'+n;
        reverse(n.begin(), n.end());
        ll k=0;
        for(ll i=0; i<l; i++)
    {
            if(n[i]>='5')
            {
                n[i+1]++;
                for(ll j=i; j>=k; j--)
                {
                    n[j]='0';
                }
                k=i;
            }
        }
        reverse(n.begin(), n.end());
        if(n[0]=='0')
        {
          for(ll i=1; i<=l; i++)
          {
              cout<<n[i];
          }
          cout<<endl;
    }
    else
    {
      for(ll i=0; i<=l; i++)
          {
              cout<<n[i];
          }
          cout<<endl;
    }
          
    }
}