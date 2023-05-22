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

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

vector<int> helper(int idx, vector<int> &v)
{
    int n = v.size();

    vector<vector<int>> ways;

    for (int i = 0; i < idx; ++i)
    {
        vector<int> curr;

        for (int k = idx; k < n; ++k)
        {
            curr.push_back(v[k]);
        }

        vector<int> rev;
        for (int j = i; j < idx; ++j)
        {
            rev.push_back(v[j]);
        }

        reverse(rev.begin(), rev.end());

        for (auto itr : rev)
            curr.push_back(itr);

        for (int m = 0; m < i; ++m)
        {
            curr.push_back(v[m]);
        }

        ways.push_back(curr);
    }

    sort(ways.rbegin(), ways.rend());

    vector<int> ans;

    for (auto itr : ways)
    {
        for (auto x : itr)
            ans.push_back(x);
        break;
    }

    return ans;
}

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

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        int idx = -1;
        int maxi = INT_MIN;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] >= maxi)
            {
                idx = i;
                maxi = max(maxi, v[i]);
            }
        }

        vector<int> temp = helper(idx, v);

        if (idx == n - 1)
        {
            vector<int> curr;
            curr.push_back(v[n - 1]);

            for (int k = 0; k < n - 1; ++k)
                curr.push_back(v[k]);

            if (curr > temp)
            {
                for (auto itr : curr)
                    cout << itr << ' ';
                cout << endl;
                continue;
            }
        }

        vector<int> temp2;
        if (idx == 0)
        {
            int idx2 = -1;

            for (int k = 0; k < n; ++k)
            {
                if (v[k] == n - 1)
                {
                    idx2 = k;
                    break;
                }
            }

            vector<int> temp2 = helper(idx2, v);

            if (idx2 == n - 1)
            {
                vector<int> curr;
                curr.push_back(v[n - 1]);

                for (int k = 0; k < n - 1; ++k)
                    curr.push_back(v[k]);

                if (curr > temp)
                {
                    for (auto itr : curr)
                        cout << itr << ' ';
                    cout << endl;
                    continue;
                }
            }

            for (auto itr : temp2)
            {
                cout << itr << ' ';
            }
            cout << endl;
            continue;
        }

        for (auto itr : temp)
            cout << itr << ' ';
        cout << endl;

        // cout << "done" << endl;
    }
    return 0;
}