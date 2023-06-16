#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a;i<b;i++)
#define fm(i,a,b) for(int i = a; i>b;i--)
using namespace std;

int main(){
int t; cin>>t;
f(i,0,t){
    int n; cin>>n;
    int te = n;
    int ans = 0;
    //Decimal Reversing
    int revNum = 0;
    int rem = 0;
    while(te != 0) {
    rem = te % 10;
    revNum = revNum * 10 + rem;
    te /= 10;
  }
  //cout<<revNum<<endl;
  if(revNum == n)ans++;
    //End Of Decimal Reversing

    //Binary Conversion
    string pos1 ="";
    string pos2 = "";
    vector <int> bin;
    int temp = n;


    while (temp!= 0){
        bin.push_back(temp%2);
        temp = temp/2;
    }
    f(j,0,bin.size()){
    pos1+=bin[j];
    }
    reverse(bin.begin(),bin.end());
     f(j,0,bin.size()){
    pos2+=bin[j];
    }
    if(pos1==pos2)ans++;
    pos1 = "";
    pos2 = "";
    //End Of Binary Conversion

//Hex Conversion


    temp = n;
    vector <char> hexa;
    int remainder, product = 1;
      while (temp!= 0){
        remainder = temp%16;
        char ch;
        if(remainder>=10)ch = remainder+55;
        else ch = remainder +48;
        hexa.push_back(ch);
        temp = temp/16;
        product*=10;

    }
      string hex1  = "";
    string hex2 = "";
     f(j,0,hexa.size()){
    hex1+=hexa[j];
    }
     reverse(hexa.begin(),hexa.end());
     f(j,0,hexa.size()){
    hex2+=hexa[j];
    }
 if(hex1==hex2)ans++;

    //End Of Hex Conversion
    if(ans>=2)cout<<"ghavi"<<endl;
    else cout<<"fanni khordim"<<endl;
   // cout<<ans<<endl;

}

return 0;
}
