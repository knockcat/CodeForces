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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        // Knockcat

        string s1, s2;
        cin >> s1 >> s2;
        ll in1 = s1.length() - 1;
        ll in2 = s2.length() - 1;

        bool flag = true;
        string ans = "";
        if (s1 == s2)
        {
            cout << "0\n";
            continue;
        }
        else if (stoll(s2) < stoll(s1))
        {
            cout << "-1\n";
            continue;
        }
        while (in1 >= 0)
        {
            if (s1[in1] > s2[in2])
            {
                if (s2[in2 - 1] == '1')
                {
                    char ch = (char)(10 + ((s2[in2] - '0') - (s1[in1] - '0')) + '0');
                    ans = ch + ans;
                    in2 -= 2;
                    in1--;
                }
                else
                {
                    flag = 0;
                    cout << "-1\n";
                    break;
                }
            }
            else
            {
                char ch = (char)(((s2[in2] - '0') - (s1[in1] - '0')) + '0');
                ans = ch + ans;
                in1--;
                in2--;
            }
            if (in2 < 0 && in1 >= 0)
            {
                flag = 0;
                cout << "-1\n";
                break;
            }
        }
        if (!flag)
            continue;
        for (int i = in2; i >= 0; i--)
            ans = s2[i] + ans;
        in1 = 0;
        for (in1 = 0; in1 < ans.length(); in1++)
        {
            if (ans[in1] != '0')
                break;
        }
        for (int i = in1; i < ans.length(); i++)
            cout << ans[i];
        cout << "\n";
    }
    return 0;
}