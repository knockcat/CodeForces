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

string removeDuplicates(string S)
{
    string ans = "";
    ans += S[0];
    for (int i = 1; i < S.size(); ++i)
    {
        if (ans.back() == S[i])
            continue;
        else
            ans.push_back(S[i]);
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
        string str;
        cin >> str;

        transform(str.begin(), str.end(), str.begin(), ::tolower);
        // cout << str << endl;
        string here = removeDuplicates(str);
        // cout << here << endl;
        string str1 = "meow";

        if (here == str1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}