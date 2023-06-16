#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t; cin>>t;

    for (int i = 0; i < t; i++) {
      int s; cin>>s;
      if(s<1024)
      cout<<s<<"B"<<endl;
      else if(s<1024*1024)
      cout<<s/1024<<"KiB"<<endl;
        else
      cout<<s/(1024*1024)<<"MiB"<<endl;
    }

    return 0;
}
