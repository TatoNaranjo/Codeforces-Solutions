#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)

using namespace std;

int main(){
int rSocks; cin>>rSocks;
int bSocks; cin>>bSocks;

int sameSocks = 0;
int difSocks = 0;

while(rSocks!=0 && bSocks !=0){
    rSocks--;
    bSocks--;
     difSocks++;
}

//cout<<"Red Socks: "<<rSocks<<endl;
//cout<<"Blue Socks: "<<bSocks<<endl;
while(rSocks>0 || bSocks>0){

    if(rSocks%2==0 && rSocks>0){
        sameSocks++;
        rSocks= rSocks-2;
    } else rSocks--;

    if(bSocks%2==0 && bSocks>0){
        sameSocks++;
        bSocks= bSocks-2;
    } else bSocks--;

}

cout<<difSocks<<" "<<sameSocks<<endl;

return 0;
}
