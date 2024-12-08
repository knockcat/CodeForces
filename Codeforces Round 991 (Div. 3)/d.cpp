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

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        string str;
        cin >> str;
        map<char, set<int>> mp;
        for (int i = 0; i < str.size(); ++i)
            mp[str[i]].insert(i);

        int step = 0;
        string ans;
        for (int i = 0; i < str.size(); ++i)
        {
            char here = '#';
            int have = 0;
            int minAtIdx = (int)str.size();
            for (char ch = '9'; ch >= '0'; --ch)
            {
                int curVal = ch - '0';
                if (!mp[ch].empty())
                {
                    int dist = 0;
                    if (*mp[ch].begin() > i)
                        dist = *mp[ch].begin() - i;
                    // else
                    //     dist = max(0ll, i - *mp[ch].begin() - 1);
                    int atIdx = *mp[ch].begin();
                    int weGet = curVal - dist;
                    if (weGet >= have and atIdx < minAtIdx)
                    {
                        minAtIdx = atIdx;
                        have = weGet;
                        here = ch;
                    }
                }
            }
            mp[here].erase(*mp[here].begin());
            if (mp[here].empty())
                mp.erase(here);
            ans += (have + '0');

            for (char ch = '9'; ch >= '0'; --ch)
            {
                set<pair<char, int>> newSet;

                while (!mp[ch].empty() and *mp[ch].begin() <= minAtIdx)
                {
                    newSet.insert({ch, *mp[ch].begin() + 1});
                    mp[ch].erase(*mp[ch].begin());
                }

                for (auto &ele : newSet)
                {
                    mp[ele.first].insert(ele.second);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}