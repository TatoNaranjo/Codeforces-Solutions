#include <iostream>
#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b;i++)
using namespace std;

int main()
{
   int t; cin>>t;
   vector<string>a;
   f(i,0,t){
        int l; cin>>l;
        string fir ="";
        f(j,0,l){
        string name; cin>>name;
        fir+=name[0];
        }
        a.push_back(fir);
   }
   int ans = 0;
    f(j,0,a.size()){
    int count=0;
    f(i,0,a.size()){
        if(a[i]==a[j])count++;


    }
    if(count<=1)ans++;
    }
    std::cout << ans << std::endl;
    return 0;
}
