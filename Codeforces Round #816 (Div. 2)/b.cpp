#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;

        // range question

        if (s < k * b || (s > k * b + n * (k - 1)))
            cout << -1 << endl;
        else
        {
            vector<ll> v(n);
            v[0] = k * b;
            s -= k * b;

            if (s > 0)
            {
                v[0] = v[0] + min(s, k - 1);
                s -= min(s, k - 1);
            }

            for (int i = 1; i < n; ++i)
            {
                if (s > 0)
                {
                    v[i] = min(s, k - 1);
                    s -= min(s, k - 1);
                }
                else
                {
                    v[i] = 0;
                }
            }

            for (auto itr : v)
                cout << itr << " ";
            cout << endl;
        }
    }
    return 0;
}