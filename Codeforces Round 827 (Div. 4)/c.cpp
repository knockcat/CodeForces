// KNOCKCAT

#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long int
#define endl "\n"

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll eps = 1e-9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        vector<string> v(8);
        for (int i = 0; i < 8; ++i)
        {
            cin >> v[i];
        }

        int ansr = 0, ansb = 0, countr = 0, countb = 0;
        for (int i = 0; i < 8; ++i)
        {
            countr = countb = 0;
            for (int j = 0; j < 8; ++j)
            {
                if (v[i][j] == 'R')
                {
                    ++countr;
                    ansr = max(ansr, countr);
                }
                else
                {
                    countr = 0;
                }
                if (v[j][i] == 'B')
                {
                    ++countb;
                    ansb = max(ansb, countb);
                }
                else
                {
                    countb = 0;
                }
            }
        }
        // cout<<countr<<" "<<countb<<endl;
        if (ansr == 8)
            cout << "R" << endl;
        if (ansb == 8)
            cout << "B" << endl;
    }
    return 0;
}