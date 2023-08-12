#include <iostream>
using namespace std;
int main(){
    string p = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    string a = "3.";
    int n; cin>>n;
    if(n==100)cout<<p<<endl;
    else{
   for(long long i = 2;i<n+2;i++){
    a+=p[i];
   }
    cout<<a<<endl;
    }
    return 0;
}