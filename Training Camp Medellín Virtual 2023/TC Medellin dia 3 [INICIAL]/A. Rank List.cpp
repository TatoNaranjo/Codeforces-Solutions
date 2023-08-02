#include <iostream>
#include <algorithm>

using namespace std;

struct team
{
    int nP;
    int tP;
};

bool cmp(const team& izq, const team& der)
{
    return izq.nP > der.nP
        || (izq.nP == der.nP && izq.tP < der.tP);
}

int main()
{
    int n, k;
    team t[50];
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> t[i].nP >> t[i].tP;
    }
    sort(t, t + n, cmp);
    k -= 1;
    int l(k), r(k);
    while (l > 0 && t[l-1].nP == t[k].nP && t[l-1].tP == t[k].tP)
    {
        l -= 1;
    }
    while (r + 1 < n && t[r+1].nP == t[k].nP && t[r+1].tP == t[k].tP)
    {
        r += 1;
    }
    cout << r - l + 1 << endl;
    return 0;
}
