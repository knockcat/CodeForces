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
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        long long maxi = *max_element(v.begin(), v.end());
        long long mini = *min_element(v.begin(), v.end());

        long long k = abs(maxi - mini);
        unordered_map<int, int> freq;
        long long res = 0;

        for (auto num : v)
        {
            res += freq[num + k] + freq[num - k];
            freq[num]++;
        }

        if (maxi == mini)
            cout << res << endl;
        else
            cout << (long long)res * 2 << endl;
    }
    return 0;
}