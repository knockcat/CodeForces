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

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll n, p, t, l;
        cin >> n >> p >> l >> t;
        int cnt = 0;

        ll maxTDays = n / 7;
        if (n % 7 != 0)
            ++maxTDays;

        ll low = 1, high = maxTDays;
        ll maxi = (maxTDays / 2);

        ll earnt = (maxi * 2 * 1LL * t);
        ll earnl = (maxi * 1LL * l);

        if (maxTDays & 1)
            earnt += t, earnl += l;
        ll tlt = earnt + earnl;

        ll days = maxi;
        if (maxTDays & 1)
            ++days;
        // cout << low << ' ' << high << endl;

        ll earned2 = tlt;
        while (low <= high)
        {
            ll mid = (low + high) >> 1;

            int mm = (mid / 2) + (mid % 2);

            ll lessonPoints = (mm * 1LL * l);
            ll taskPoints = (mid * 1LL * t);

            ll total = lessonPoints + taskPoints;

            // cout << mid << ' ' << ' ' << mm << ' ' << total << endl;

            if (total >= p)
            {
                earned2 = min(earned2, total);
                days = min(days, (mid / 2) + (mid % 2));
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        ll earned = 0;

        if (days == maxi)
            earned = tlt;
        else
            earned = earned2;

        ll rem = p - earned;

        ll moreDays = 0;
        if (rem > 0)
        {
            moreDays = rem / l;
            if (rem % l != 0)
                ++moreDays;
        }
        moreDays += days;
        ll remDays = n - moreDays;

        cout << remDays << endl;
    }
    return 0;
}