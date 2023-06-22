#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b

using namespace std;
int numCartas (int n){
return floor((3*pow(n,2)+n)/2);
}

int main(){
int n; cin>>n;

while (numCartas(n)%4 != 0) n++;

cout<<n<<endl;

return 0;
}
