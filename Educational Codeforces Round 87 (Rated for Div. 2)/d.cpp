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

// 1 based Indexing

template <typename T>
class BIT
{
public:
    T N;
    vector<T> fen;

    BIT() {}
    BIT(int n)
    {
        N = n;
        fen.assign(n + 1, 0); // intialised with 0 at first
    }

    void update(int idx, int val)
    {
        while (idx <= N)
        {
            fen[idx] += val;
            idx += (idx & (-idx));
        }
    }

    int prefSum(int idx)
    {
        int sum = 0;
        while (idx > 0)
        {
            sum += fen[idx];
            idx -= (idx & (-idx));
        }
        return sum;
    }

    int rangeSum(int l, int r)
    {
        return prefSum(r) - prefSum(l - 1);
    }

    void updateMax(int idx, int val)
    {
        while (idx <= N)
        {
            fen[idx] = max(fen[idx], val);
            idx += (idx & (-idx));
        }
    }

    int prefMax(int idx)
    {
        int ans = -2e9;
        while (idx > 0)
        {
            ans = max(ans, fen[idx]);
            idx -= (idx & (-idx));
        }
        return ans;
    }

    int find1(int k)
    {
        int curr = 0, ans = 0, prevsum = 0;
        for (int i = 19; i >= 0; i--)
        {
            if ((curr + (1 << i)) < N && fen[curr + (1 << i)] + prevsum < k)
            {
                ans = curr + (1 << i);
                curr = ans;
                prevsum += fen[curr];
            }
        }

        return (ans + 1);
    }

    // lower_bound of prefix Sum
    int find(int k)
    {
        int curr = 0, ans = 0, prevSum = 0;
        for (int i = log2(N); i >= 0; --i)
        {
            if (fen[curr + (1 << i)] + prevSum < k)
            {
                curr += (1 << i);
                prevSum += fen[curr];
            }
        }
        return (curr + 1);
    }
};
// BIT<int> bit(n);

// bit.update(idx, val);    // update
// bit.prefSum(idx);        // pref sum till idx
// bit.rangeSum(l, r);      // range sum of [l,r]
// bit.updateMax(idx, val); // update all the values containing sum of range idx with max(val,fen[idx]);
// bit.prefMax(idx);        // max in all the prefixes containing idx [l idx r] also inclusive
// bit.find(k);             // idx of lower_bound of prefix sum

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    BIT<int> b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        b.update(v[i], 1);
    }

    while (q--)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            b.update(x, 1);
        }
        else
        {
            x = -1 * x;
            // int low = 0, high = n;
            // while (low < high)
            // {
            //     int mid = (low + high) / 2;
            //     int val = b.prefSum(mid);

            //     if (x <= val)
            //         high = mid;
            //     else
            //         low = mid + 1;
            // }
            // b.update(low, -1);

            int num = b.find1(x);
            b.update(num, -1);
        }
    }
    int ans = b.prefSum(n);

    if (!ans)
        cout << 0 << endl;
    else
    {
        // int low = 0, high = n;
        // while (low < high)
        // {
        //     int mid = (low + high) / 2;
        //     int val = b.prefSum(mid);

        //     if (ans <= val)
        //         high = mid;
        //     else
        //         low = mid + 1;
        // }
        // cout << low << endl;

        for (int i = 1; i <= n; ++i)
        {
            if (b.prefSum(i) > 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
