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

string isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
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
        string str;
        cin >> str;

        for (int i = 0; i <= n / 2; ++i)
        {
            if (str[i] != str[n - i - 1])
            {
                str[i] = '$';
            }
        }

        // cout << str << endl;
        int cnt = count(str.begin(), str.end(), '$');

        int maxi = INT_MIN;
        int c = 0;
        for (int i = 0; i < n; ++i)
        {
            if (str[i] == '$')
            {
                ++c;
                maxi = max(maxi, c);
            }
            else
            {
                c = 0;
            }
        }
        // cout << maxi << endl;
        cout << (cnt == 0 or cnt == maxi ? "Yes" : "No") << endl;
    }
    return 0;
}