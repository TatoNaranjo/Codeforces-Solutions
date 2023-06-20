#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)

using namespace std;

int main(){
char j;
string nS = "";
while(j!='}'){
    cin>>j;
    nS+=j;
}
set<char>s;
f(i,0,nS.size()){
if(nS[i]!=123 && nS[i]!=125 && nS[i]!=44)s.insert(nS[i]);
}


cout<<s.size()<<endl;
return 0;
}
