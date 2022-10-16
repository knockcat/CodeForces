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
        char ch;
        cin >> ch;

        string str;
        cin >> str;
        str += str;

        if (ch == 'g')
            cout << 0 << '\n';
        else
        {

            int ans = INT_MIN;

            int greenidx = 0, charidx = 0;

            for (int i = 0; i < n; ++i)
            {
                if (str[i] == 'g')
                {
                    greenidx = i + 1;
                    break;
                }
            }
            int glast = 0;

            for (int i = 0; i < n; ++i)
            {
                if (str[i] == 'g')
                {
                    glast = i + 1;
                }
            }

            vector<int> char_last;
            for (int i = glast; i < n; ++i)
            {
                if (str[i] == ch)
                    char_last.push_back(i + 1);
            }

            for (int j = 0; j < n; ++j)
            {
                if (str[j] == ch)
                {
                    charidx = j + 1;
                }
            }
            bool one = true;
            for (int k = charidx; k < n; ++k)
            {
                if (str[k] == 'g')
                {
                    one = false;
                    break;
                }
            }

            vector<int> charoccur, goccur;

            for (int i = 0; i < n; ++i)
            {
                if (str[i] == ch)
                    charoccur.push_back(i + 1);
                if (str[i] == 'g')
                    goccur.push_back(i + 1);
            }

            int i = 0, j = 0;

            // for (auto itr : charoccur)
            //     cout << itr << " ";
            // cout << endl;
            // for (auto itr : goccur)
            //     cout << itr << " ";
            // cout << endl;

            while (i < charoccur.size() && j < goccur.size())
            {
                if (charoccur[i] <= goccur[j])
                {
                    ans = max(ans, goccur[j] - charoccur[i]);
                    ++i;
                }
                else
                {
                    ++j;
                }
            }

            if (one)
            {
                // ans = max(ans, n - charidx + greenidx);
                for (int i = 0; i < char_last.size(); ++i)
                {
                    ans = max(ans, n - char_last[i] + greenidx);
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}