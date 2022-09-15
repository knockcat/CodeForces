#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
#define int long long int
int32_t main()
{
    // KNOCKCAT

    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v;

        v.push_back(l);
        int count = 1;

        for (int i = 2; i <= n; ++i)
        {
            if (l % i == 0)
            {
                v.push_back(l);
                ++count;
            }
            else
            {
                int j = l / i;
                j = (j + 1) * i;

                if (j <= r)
                {
                    v.push_back(j);
                    ++count;
                }
                else
                {
                    break;
                }
            }
        }

        if (v.size() == n)
        {
            cout << "YES" << endl;
            for (auto itr : v)
                cout << itr << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
