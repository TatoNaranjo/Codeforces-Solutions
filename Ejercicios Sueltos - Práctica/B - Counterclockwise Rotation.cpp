#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define pb push_back
#define pi  3.14159265358979323846
#define fast_io                                                                \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

int main(){
  fast_io;
  int a,b,c; cin>>a>>b>>c;

  double radC = c*(pi/180);
  double ansA =  (a*cos(radC))-(b*sin(radC));
  double ansB = a*sin(radC)+b*cos(radC);
  cout<<ansA<<" "<<ansB<<endl;
return 0;
}
