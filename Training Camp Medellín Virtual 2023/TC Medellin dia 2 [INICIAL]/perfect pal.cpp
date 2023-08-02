
#include<bits/stdc++.h>

using namespace std;
void fileio()
{
  //#ifdef LGS
  freopen("in.txt","r",stdin);
  //freopen("out.txt","w",stdout);
  //#endif
}


void solve()
{
     string x; cin >> x; int len = x.size();
     map<int,int> mp; int res = 0;
     for(int i = 0;i < len;i ++) mp[x[i] - 'a'] ++;
     for(auto k : mp) res = max(res,k.second);
     res = len - res;
     cout << res << endl;
}

int main()
{
    //fileio();
    ios::sync_with_stdio(false);
      cin.tie(0);
    int tc = 0; cin >> tc;
    for(int i = 0;i < tc;i ++)solve();
}
