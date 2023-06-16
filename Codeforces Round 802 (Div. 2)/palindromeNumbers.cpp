#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans;
        if(s[0]!='9')
        {
            for(int i=0;i<n;i++)
            {
                int x=s[i]-'0';
                int y=9-x;
                ans+=y+'0';
            }
        }
        else
        {
            int c=0;
            for(int i=n-1;i>=0;i--)
            {
                int x=s[i]-'0';
                x+=c;
                if(x>1)
                {
                    int y=11-x;
                    c=1;
                    ans+=(y+'0');
                }
                else
                {
                    c=0;
                    int y=1-x;
                    ans+=y+'0';
                }
            }
            reverse(ans.begin(),ans.end());
        }
        cout<<ans<<endl;
    }
}
