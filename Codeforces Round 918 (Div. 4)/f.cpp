// JAI SHREE RAM
// KNOCKCAT

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

// ordered set
template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// ordered multiset
template <class T> // use pair // (erase probability)
using omset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// oset (ordered_set) -> less, greater
// omset (ordered_multi_set) -> less_equal, greater_equal

// s.order_of_key(k) : Number of elements strictly smaller than k
// *s.find_by_order(k) : k-th element in a set (counting from zero)

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

        int n;
        cin >> n;

        vector<pair<int, int>> vp(n);

        for (auto &itr : vp)
            cin >> itr.first >> itr.second;

        oset<int> st;

        for (auto &[_, e] : vp)
        {
            st.insert(e); // ending
        }

        int cnt = 0;

        sort(vp.begin(), vp.end());

        for (auto &[_, e] : vp)
        {
            cnt += st.order_of_key(e);
            st.erase(e);
        }
        cout << cnt << endl;
    }
    return 0;
}