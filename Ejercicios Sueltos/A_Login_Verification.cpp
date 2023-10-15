#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b;i++)
#define upper(a) transform(a.begin(),a.end(),a.begin(),[](unsigned char c){return toupper(c);});
#define lower(a) transform(a.begin(),a.end(),a.begin(),[](unsigned char c){return tolower(c);});
#define v(a,b) vector<a> b
#define pb push_back
using namespace std;

int main(){
    string ogpass; cin>>ogpass;
    lower(ogpass);
    f(i,0,ogpass.size()){
        if(ogpass[i]=='i'||ogpass[i]=='l')ogpass[i]='1';
        if(ogpass[i]=='o')ogpass[i]='0';
    }
    int t; cin>>t;
    int count = 0;
    v(string,vec);
    while(t--){
        string nPass; cin>>nPass;
        lower(nPass);
    vec.pb(nPass);
    }
    f(i,0,vec.size()){
        string actWord = vec[i];
            f(j,0,actWord.size()){
        if(actWord[j]=='i'||actWord[j]=='l')actWord[j]='1';
        if(actWord[j]=='o')actWord[j]='0';
    }
    if(actWord==ogpass)count++;
    }
    if(count>=1)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}