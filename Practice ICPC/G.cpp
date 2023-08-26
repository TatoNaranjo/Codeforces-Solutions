
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
long long fast_power(long long base, long long exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base);
        }
        exponent = exponent / 2;
        base = (base * base);
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll b;
        cin>>b;
        ll ans = 0;
        ll exponent = 1;
        ll temp = 0;
        while(true){
            temp = ans;
      ans = pow(2,exponent);
          if(ans>b)break;
    
   
        }
        cout<<temp-1<<endl;
       
    }
    return 0;
}
