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

template <typename T>
class SEG
{
public:
    vector<T> tree, lazy, arr;
    T N;
    SEG() {}
    SEG(vector<int> v)
    {
        N = v.size();
        arr.resize(N);
        for (int i = 0; i < N; ++i)
            arr[i] = v[i];
        tree.resize(4 * N + 5);
        lazy.resize(4 * N + 5, 0);

        buildTree(0, 0, N - 1);
    }

public:
    void buildTree(int idx, int low, int high)
    {
        if (low == high)
        {
            tree[idx] = arr[low];
            return;
        }

        int mid = (low + high) >> 1;
        buildTree(2 * idx + 1, low, mid);
        buildTree(2 * idx + 2, mid + 1, high);

        // updation part
        tree[idx] = merge(tree[2 * idx + 1], tree[2 * idx + 2]);
        return;
    }

    int queryTree(int idx, int low, int high, int l, int r)
    {
        // no overlap
        // l r low high or low high l r
        if (r < low or l > high)
            return 0;

        // complete overlap
        // [l low high r]
        if (low >= l and high <= r)
            return tree[idx];

        // partial overlap
        int mid = (low + high) / 2;
        int left = queryTree(2 * idx + 1, low, mid, l, r);
        int right = queryTree(2 * idx + 2, mid + 1, high, l, r);

        // updation part
        return merge(left, right);
    }

    int query(int l, int r)
    {
        return queryTree(0, 0, N - 1, l, r);
    }

    void build()
    {
        buildTree(0, 0, N - 1);
    }

    int merge(int a, int b)
    {
        return __gcd(a, b);
    }
};

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (auto &ele : v)
            cin >> ele;

        vector<int> diff;
        for (int i = 1; i < n; ++i)
            diff.push_back(abs(v[i] - v[i - 1]));

        int l, r;
        if (n == 1)
        {
            while (q--)
            {
                cin >> l >> r;
                cout << 0 << '\n';
            }
            continue;
        }
        SEG<int> seg(diff);
        while (q--)
        {
            cin >> l >> r;
            --l, --r;
            cout << seg.query(l, r - 1) << ' ';
        }
        cout << '\n';
    }
    return 0;
}