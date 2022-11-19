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

// int32_t main()
// {
//     fast;
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         // Knockcat

//         int n, m;
//         cin >> n >> m;
//         bool one = false;

//         vector<int> visited(1001, 0);
//         vector<int> v(n);
//         int maxi = -1e9;
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> v[i];
//             maxi = max(maxi, v[i]);
//             ++visited[v[i]];
//         }

//         if (m == 0)
//         {
//             one = true;
//         }
//         else
//         {
//             for (int i = 1; i < visited.size(); ++i)
//             {
//                 if (m == 0)
//                 {
//                     one = true;
//                     break;
//                 }
//                 else if (m < 0)
//                 {
//                     one = false;
//                     break;
//                 }

//                 if (!visited[i])
//                 {
//                     m -= i;
//                     maxi = max(maxi, i);
//                     ++visited[i];
//                 }
//             }
//         }

//         for (int i = 1; i <= maxi; ++i)
//         {
//             if (!visited[i])
//             {
//                 one = false;
//                 break;
//             }
//         }
//         if (one)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }

int32_t main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        // Knockcat

        int n, m, maxi = -1e9;
        cin >> n >> m;
        bool one = false;

        vector<int> v(n);
        set<int> s;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            s.insert(v[i]);
            maxi = max(maxi, v[i]);
        }

        int ok = 1;

        if (m == 0)
            one = true;
        else
        {
            while (m > 0)
            {
                if (!s.count(ok))
                {
                    m -= ok;
                    s.insert(ok);
                    maxi = max(maxi, ok);
                }
                ++ok;
            }
            int sum = 0;
            for (auto itr : s)
                sum += itr;

            int maxiSum = (maxi * (maxi + 1)) / 2;

            if (sum != maxiSum or m < 0)
                one = false;
            else
                one = true;
        }

        if (one)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}