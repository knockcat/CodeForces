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
    SEG() {}
    SEG(vector<T> arr)
    {
        N = arr.size();
        v.resize(N);
        for (T i = 0; i < N; ++i)
            v[i] = arr[i];

        seg.resize(N * 4 + 5);
        buildTree(0, 0, N - 1);
    }

    void buildTree(int idx, int low, int high)
    {
        if (low == high)
        {
            seg[idx] = v[low];
            return;
        }

        int mid = (low + high) / 2;
        buildTree(2 * idx + 1, low, mid);
        buildTree(2 * idx + 2, mid + 1, high);

        // update
        seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
    }

    int query(int idx, int low, int high, int l, int r)
    {
        // no overlap
        // l r low high or low high l r
        if (r < low or l > high)
            return 0;

        // complete overlap
        // [l low high r]
        if (low >= l and high <= r)
            return seg[idx];

        // partial overlap
        int mid = (low + high) / 2;
        int left = query(2 * idx + 1, low, mid, l, r);
        int right = query(2 * idx + 2, mid + 1, high, l, r);

        // update
        return left + right;
    }

    void update(int idx, int low, int high, int ind, int val)
    {
        if (low == high)
        {
            seg[idx] += val;
            return;
        }

        int mid = (low + high) / 2;
        if (ind <= mid)
            update(2 * idx + 1, low, mid, ind, val);
        else
            update(2 * idx + 2, mid + 1, high, ind, val);

        // update
        seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
    }

    int query(int l, int r)
    {
        return query(0, 0, N - 1, l, r);
    }

    void pointUpdate(int ind, int val)
    {
        update(0, 0, N - 1, ind, val);
    }
};
// SEG<int> seg(v);

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
        vector<int> v(n);
        int maxi = -1;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            maxi = max(maxi, v[i]);
        }

        vector<int> freq(maxi + 1, 0);
        for (int i = 0; i < n; ++i)
            ++freq[v[i]];

        SEG<int> seg(freq);
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            --freq[v[i]];
            seg.pointUpdate(v[i], -1);
            cnt += seg.query(1, v[i] - 1);
        }
        cout << cnt << endl;
    }

    return 0;
}