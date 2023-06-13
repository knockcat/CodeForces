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

ll calc(string &str, map<char, ll> &mp)
{
    ll sum = 0;
    int n = str.size();
    char maxFromLast = 'A';
    int idx = n - 1;
    for (int i = n - 1; i >= 0; --i)
    {
        if (maxFromLast > str[i])
        {
            sum += -mp[str[i]];
        }
        else
            sum += mp[str[i]];
        maxFromLast = max(maxFromLast, str[i]);
    }

    return sum;
}

ll replaceFromFirst(string &str, map<char, ll> &mp)
{
    int n = str.size();

    int locA = -1, locB = -1, locC = -1, locD = -1, locE = -1;

    for (int i = 0; i < n; ++i)
    {
        if (str[i] == 'A' and locA == -1)
            locA = i;
        if (str[i] == 'B' and locB == -1)
            locB = i;
        if (str[i] == 'C' and locC == -1)
            locC = i;
        if (str[i] == 'D' and locD == -1)
            locD = i;
        if (str[i] == 'E' and locE == -1)
            locE = i;
    }

    ll sum = calc(str, mp);

    if (locA != -1)
    {
        str[locA] = 'B';
        sum = max(sum, calc(str, mp));
        str[locA] = 'C';
        sum = max(sum, calc(str, mp));
        str[locA] = 'D';
        sum = max(sum, calc(str, mp));
        str[locA] = 'E';
        sum = max(sum, calc(str, mp));
        str[locA] = 'A';
    }
    if (locB != -1)
    {
        sum = max(sum, calc(str, mp));
        str[locB] = 'C';
        sum = max(sum, calc(str, mp));
        str[locB] = 'D';
        sum = max(sum, calc(str, mp));
        str[locB] = 'E';
        sum = max(sum, calc(str, mp));
        str[locB] = 'B';
    }
    if (locC != -1)
    {
        sum = max(sum, calc(str, mp));
        str[locC] = 'D';
        sum = max(sum, calc(str, mp));
        str[locC] = 'E';
        sum = max(sum, calc(str, mp));
        str[locC] = 'C';
    }
    if (locD != -1)
    {
        sum = max(sum, calc(str, mp));
        str[locD] = 'E';
        sum = max(sum, calc(str, mp));
        str[locD] = 'D';
    }
    if (locE != -1)
    {
        sum = max(sum, calc(str, mp));
    }

    return sum;
}

ll replaceFromEnd(string &str, map<char, ll> &mp)
{
    int n = str.size();

    int locA = -1, locB = -1, locC = -1, locD = -1, locE = -1;

    for (int i = n - 1; i >= 0; --i)
    {
        if (str[i] == 'A' and locA == -1)
            locA = i;
        if (str[i] == 'B' and locB == -1)
            locB = i;
        if (str[i] == 'C' and locC == -1)
            locC = i;
        if (str[i] == 'D' and locD == -1)
            locD = i;
        if (str[i] == 'E' and locE == -1)
            locE = i;
    }

    ll sum = calc(str, mp);

    if (locE != -1)
    {
        str[locE] = 'D';
        sum = max(sum, calc(str, mp));
        str[locE] = 'C';
        sum = max(sum, calc(str, mp));
        str[locE] = 'B';
        sum = max(sum, calc(str, mp));
        str[locE] = 'A';
        sum = max(sum, calc(str, mp));
        str[locE] = 'E';
    }
    if (locD != -1)
    {
        sum = max(sum, calc(str, mp));
        str[locD] = 'C';
        sum = max(sum, calc(str, mp));
        str[locD] = 'B';
        sum = max(sum, calc(str, mp));
        str[locD] = 'A';
        sum = max(sum, calc(str, mp));
        str[locD] = 'D';
    }
    if (locC != -1)
    {
        sum = max(sum, calc(str, mp));
        str[locC] = 'B';
        sum = max(sum, calc(str, mp));
        str[locC] = 'A';
        sum = max(sum, calc(str, mp));
        str[locC] = 'C';
    }
    if (locB != -1)
    {
        sum = max(sum, calc(str, mp));
        str[locB] = 'A';
        sum = max(sum, calc(str, mp));
        str[locB] = 'B';
    }
    if (locA != -1)
    {
        sum = max(sum, calc(str, mp));
    }

    return sum;
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        map<char, ll> mp;

        string str;
        cin >> str;

        int n = str.size();

        char maxi = 'A';

        mp.insert({'A', 1});
        mp.insert({'B', 10});
        mp.insert({'C', 100});
        mp.insert({'D', 1000});
        mp.insert({'E', 10000});

        // 1000 1 1 1 10 1000 100 1

        ll ans;

        ll maxFromFirst = replaceFromFirst(str, mp);
        ll maxFromLast = replaceFromEnd(str, mp);

        ans = max(maxFromFirst, maxFromLast);

        cout << ans << endl;
    }
    return 0;
}