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

bool isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    for (int i = 0; i <= N - M; i++)
    {
        int j;

        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return true;
    }

    return false;
}
/*
int32_t main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        // Knockcat
        string s;
        cin >> s;
        bool one = true;
        int n = s.size();

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'Y')
            {
                if (i > 0)
                {
                    if (s[i - 1] != 's')
                        one = false;
                }
                if (i < n - 1)
                {
                    if (s[i + 1] != 'e')
                        one = false;
                }
            }
            else if (s[i] == 'e')
            {
                if (i > 0)
                {
                    if (s[i - 1] != 'Y')
                        one = false;
                }
                if (i < n - 1)
                {
                    if (s[i + 1] != 's')
                        one = false;
                }
            }
            else if (s[i] == 's')
            {
                if (i > 0)
                {
                    if (s[i - 1] != 'e')
                        one = false;
                }
                if (i < n - 1)
                {
                    if (s[i + 1] != 'Y')
                        one = false;
                }
            }
            else
                one = false;
            if (!one)
                break;
        }

        if (one)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}*/

bool check(int i, string s, string t)
{
    for (int j = 0; j < s.size(); ++j)
    {
        if (s[j] != t[(i + j) % 3])
            return false;
    }
    return true;
}

int32_t main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        // Knockcat
        string s;
        cin >> s;
        string ok = "Yes";

        if (check(0, s, ok) or check(1, s, ok) or check(2, s, ok))
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}