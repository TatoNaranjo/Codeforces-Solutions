#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)

using namespace std;

int main(){
int a; cin>>a;
int b; cin>>b;
int c; cin>>c;

int steps = 0;
f(i,0,3){
if(a>b){
    int temp = a;
    a = b;
    b = temp;
}
if(b>c){
    int temp = b;
    b = c;
    c = temp;
}
}
while(c!=b){
    c--;
    steps++;
}
while(b!=a){
    b--;
    steps++;
}
cout<<a<<" "<<b<< " "<<c<<endl;

cout<<steps<<endl;

return 0;
}
