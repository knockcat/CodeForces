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

template <typename T>
class SEG
{
public:
    vector<T> seg, v;
    T N;
    int n;
    SEG() {}
    SEG(vector<T> arr, int n)
    {
        N = arr.size();
        this->n = n;
        v.resize(N);
        for (T i = 0; i < N; ++i)
            v[i] = arr[i];

        seg.resize(N * 4 + 5, 0);
        if (n & 1)
            buildTree(0, 0, N - 1, 1);
        else
            buildTree(0, 0, N - 1, 0);
    }

    void buildTree(int idx, int low, int high, bool orr)
    {
        if (low == high)
        {
            seg[idx] = v[low];
            return;
        }

        int mid = (low + high) / 2;
        buildTree(2 * idx + 1, low, mid, !orr);
        buildTree(2 * idx + 2, mid + 1, high, !orr);

        // update
        if (orr)
            seg[idx] = seg[2 * idx + 1] | seg[2 * idx + 2];
        else
            seg[idx] = seg[2 * idx + 1] ^ seg[2 * idx + 2];
    }

    int query(int idx, int low, int high, int l, int r)
    {
        // no overlap
        // l r low high or low high l r
        if (r < low or l > high)
            return INT_MAX;

        // complete overlap
        // [l low high r]
        if (low >= l and high <= r)
            return seg[idx];

        // partial overlap
        int mid = (low + high) / 2;
        int left = query(2 * idx + 1, low, mid, l, r);
        int right = query(2 * idx + 2, mid + 1, high, l, r);

        // update
        return min(left, right);
    }

    void update(int idx, int low, int high, int ind, int val, bool orr)
    {
        if (low == high)
        {
            seg[idx] = val;
            return;
        }

        int mid = (low + high) / 2;
        if (ind <= mid)
            update(2 * idx + 1, low, mid, ind, val, !orr);
        else
            update(2 * idx + 2, mid + 1, high, ind, val, !orr);

        // update
        if (orr)
            seg[idx] = seg[2 * idx + 1] |
                       seg[2 * idx + 2];
        else
            seg[idx] = seg[2 * idx + 1] ^ seg[2 * idx + 2];
    }

    int query(int l, int r)
    {
        return query(0, 0, N - 1, l, r);
    }

    void pointUpdate(int ind, int val, bool orr)
    {
        update(0, 0, N - 1, ind, val, orr);
    }
};

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
    int tot = pow(2, n);
    vector<int> v(tot);
    for (auto &itr : v)
        cin >> itr;

    SEG<int> seg(v, n);

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;
        --idx;
        if (n & 1)
            seg.pointUpdate(idx, val, 1);
        else
            seg.pointUpdate(idx, val, 0);

        cout << seg.seg[0] << endl;
    }
    return 0;
}