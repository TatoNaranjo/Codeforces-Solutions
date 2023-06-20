#import <bits/stdc++.h>
#define f(i,a,b) for (int i = a; i<b;i++)

using namespace std;

int main(){
int l; cin>>l;
string alphabet = "abcdefghijklmnopqrstuvwxyz";
string a; cin>>a;
transform (a.begin(),a.end(),a.begin(),::tolower);
vector <char> b;
f(l,0,a.size()){
b.push_back(a[l]);
}
f(j,0,b.size()){
f(k,0,alphabet.size()){
if(b[j]==alphabet[k]) alphabet[k] ='.';
    }
}
//cout<<alphabet<<endl;
if(alphabet == "..........................") cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;

}
