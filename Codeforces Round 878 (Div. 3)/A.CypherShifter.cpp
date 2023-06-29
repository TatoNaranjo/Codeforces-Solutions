//Made By Tato
#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a;i<b;i++)

using namespace std;

int main()
{
    cin.tie(0);

    int t; cin>>t;
    f(i,0,t){
    int l; cin>>l;
    string w; cin>>w;
    string temp = "";
    int index = 0;
    f(i,0,l){
        temp += w[i];
        f(j,i+1,l){
            if(w[i]==w[j]){
                i=j;
                break;
            }
        }

    }
     std::cout << temp << std::endl;
    }
    return 0;
}
