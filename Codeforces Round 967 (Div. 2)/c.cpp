// JAI SHREE RAM
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
const ll eps = -1e9;
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

#ifndef ONLINE_JUDGE
bool LOCAL = true;
#else
bool LOCAL = false;
#endif

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int32_t main()
{
    // fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;

        vector<vector<int>> edges;

        auto ask = [&](int a, int b)
        {
            cout << "? " << a << ' ' << b << endl;
            int res;
            cin >> res;

            if (res == -1)
                exit(0);

            return res;
        };

        auto answer = [&]()
        {
            cout << "! ";
            for (auto &edge : edges)
                cout << edge[0] << ' ' << edge[1] << ' ';
            cout << endl;
        };

        for (int i = 2; i <= n; ++i)
        {
            int ancestor = 1;

            while (true)
            {
                int mid = ask(ancestor, i);
                if (mid == ancestor)
                {
                    edges.push_back({mid, i});
                    break;
                }
                ancestor = mid;
            }
        }

        answer();
    }

    return 0;
}

// g++ -DONLINE_JUDGE main.cpp && ./a.out