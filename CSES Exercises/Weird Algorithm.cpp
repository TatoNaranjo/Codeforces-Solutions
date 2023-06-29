#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define pb push_back

using namespace std;

int main(){

ll n; cin>>n;
cout<<n<<" ";
while (n!=1){

    if(n%2==0) n/=2;
    else n = (n*3)+1;
    cout<<n<<" ";

}
return 0;
}
