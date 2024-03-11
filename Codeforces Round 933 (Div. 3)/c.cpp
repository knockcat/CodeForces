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

vector<int> prefix_function(string s)
{
    int n = s.size();
    vector<int> pi(n, 0);

    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];
        while (j > 0 and s[i] != s[j])
            j = pi[j - 1];

        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    // Time Complexity = O(n)
    return pi;
}

int get(string &str, string &pat)
{
    string s = pat;
    vector<int> prefix = prefix_function(s);
    int cnt = 0;
    string t = str;

    int pos = -1;
    int i(0), j(0);
    while (i < t.size())
    {
        if (t[i] == s[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j != 0)
                j = prefix[j - 1];
            else
                i++;
        }

        if (j == s.size())
        {
            ++cnt;
        }
    }

    return cnt;
}

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;
        string str;
        cin >> str;

        string mp = "map";
        string pie = "pie";
        string mapie = "mapie";

        int f = get(str, mp);
        int s = get(str, pie);
        int t = get(str, mapie);

        cout << (f + s - t) << endl;
    }
    return 0;
}