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
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll n;
        cin >> n;

        ll ans = LONG_LONG_MAX;

        function<bool(ll)> helper = [&](ll n)
        {
            return (ceil(log2(n)) == floor(log2(n)));
        };

        if (helper(n))
        {
            cout << 0 << endl;
        }
        else
        {
            string num = to_string(n);

            for (int i = 0; i <= 60; ++i)
            {
                ll here = (ll)pow(2, i);

                string curr = to_string(here);

                ll j = 0, k = 0, cnt = 0;

                bool ok = true;

                while (j < num.size() and k < curr.size())
                {
                    if (num[j] == curr[k])
                    {
                        ++j, ++k;
                        ok = true;
                    }
                    else
                    {
                        ++j, ++cnt;
                        ok = false;
                    }
                }

                if (ok)
                {
                    if (j == num.size())
                    {
                        --k;
                        cnt += (curr.size() - k - 1);
                    }
                    else if (k == curr.size())
                    {
                        --j;
                        cnt += (num.size() - j - 1);
                    }
                }
                else
                {
                    --k;
                    cnt += (curr.size() - k - 1);
                }
                ans = min(ans, cnt);
            }
            cout << ans << endl;
        }
    }
    return 0;
}