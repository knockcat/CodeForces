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
        int n;
        cin >> n;

        vector<int> A(n);
        vector<int> B(n);
        int mx = 0;

        int time = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
            time += A[i];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> B[i];
            time += B[i];

            if (B[i] > mx)
                mx = B[i];
        }

        cout << time - mx << '\n';
    }

    return 0;
}