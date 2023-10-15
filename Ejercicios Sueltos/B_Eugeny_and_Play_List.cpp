#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define upper(a) transform(a.begin(),a.end(),a.begin(),[](unsigned char c){return toupper(c);});
#define lower(a) transform(a.begin(),a.end(),a.begin(),[](unsigned char c){return tolower(c);});
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define us(a,b) unordered_set<a> b;
#define pb push_back
#define fast_io                                                                \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

int binary_search(vector <int> arr, int l,int r, int x){
    if(r>=l){
        int mid = l+(r-l)/2;
        if(arr[mid]==x)return mid;
        if(arr[mid]>x)return binary_search(arr,l,mid-1,x);
        return binary_search(arr,mid+1,r,x);

    }
    return -1;
}
int main(){
  fast_io;
    int n,m;
    cin>>n>>m;
    v(int,vec);
    int counter = 0;
    f(i,0,n){
        int ci,ti;
        cin>>ci>>ti;
        counter+= ci*ti;
        vec.pb(counter);
       
    }
    int ind = 0;
    f(i,0,m){
        int x; cin>>x;
        while(ind<n && vec[ind]<x)ind++;
        cout<<ind+1<<endl;
    }
return 0;
}
