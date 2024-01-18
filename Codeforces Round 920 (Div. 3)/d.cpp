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
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If you will be good at programming she will be yours

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, m;
        cin >> n >> m;

        vector<int> f(n), s(m);

        for (auto &ele : f)
            cin >> ele;
        for (auto &ele : s)
            cin >> ele;

        map<int, int> mp1, mp2;

        for (auto &ele : f)
            ++mp1[ele];
        for (auto &ele : s)
            ++mp2[ele];

        set<int> st1(f.begin(), f.end());
        set<int> st2(s.begin(), s.end());

        int ans = 0;

        while (1)
        {
            int firstMin = *st1.begin();
            int firstMax = *st1.rbegin();

            int secondMin = *st2.begin();
            int secondMax = *st2.rbegin();

            set<pair<int, int>> st;

            // cout << firstMax << ' ' << firstMax << ' ' << secondMax << ' ' << secondMin << endl;

            st.insert({abs(firstMin - secondMin), 1});
            st.insert({abs(firstMin - secondMax), 2});
            st.insert({abs(firstMax - secondMin), 3});
            st.insert({abs(firstMax - secondMax), 4});

            auto got = *st.rbegin();

            int type = got.second;
            int diff = got.first;

            if (type == 1)
            {
                --mp1[firstMin];
                --mp2[secondMin];

                if (mp1[firstMin] == 0)
                    st1.erase(firstMin);
                if (mp2[secondMin] == 0)
                    st2.erase(secondMin);
            }
            else if (type == 2)
            {
                --mp1[firstMin];
                --mp2[secondMax];

                if (mp1[firstMin] == 0)
                    st1.erase(firstMin);
                if (mp2[secondMax] == 0)
                    st2.erase(secondMax);
            }
            else if (type == 3)
            {
                --mp1[firstMax];
                --mp2[secondMin];

                if (mp1[firstMax] == 0)
                    st1.erase(firstMax);
                if (mp2[secondMin] == 0)
                    st2.erase(secondMin);
            }
            else if (type == 4)
            {
                --mp1[firstMax];
                --mp2[secondMax];

                if (mp1[firstMax] == 0)
                    st1.erase(firstMax);
                if (mp2[secondMax] == 0)
                    st2.erase(secondMax); // wrote secondMin here, a mistake ruined the contest
            }

            // cout << type << ' ' << diff << endl;
            ans += diff;

            if (st1.empty())
                break;
        }

        cout << ans << endl;
    }
    return 0;
}