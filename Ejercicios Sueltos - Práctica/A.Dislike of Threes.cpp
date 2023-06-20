#include <bits/stdc++.h>
#define fi(i,a,b) for(int i = a; i<b; i++)
#define f(i,a,b) for(int i = a; i<=b; i++)
#define ll long long


using namespace std;

int main(){
int t; cin>>t;
fi(i,0,t){
int n;
cin>>n;
vector <int> v;
int counter = 0;
int cnt = 0;
fi(k,0,n){
      counter++;
    if(counter%3==0)counter++;
    if(counter%10==3)counter++;
    if (counter%3==0)counter++;

}
cout<<counter<<endl;
}

return 0;
}
