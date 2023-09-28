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

        // sum
        tree[idx] = tree[2 * idx + 1] & tree[2 * idx + 2];

        // min
        // tree[idx] = min(tree[2 * idx + 1], tree[2 * idx + 2]);
        return;
    }

public:
    void updateLazy(int idx, int low, int high, int l, int r, int val)
    {
        // update the previous remaining updates
        // and propogates downward
        if (lazy[idx] != 0)
        {
            // updation part

            // sum
            // tree[idx] += (high - low + 1) * lazy[idx];

            // propogates the lazy updates downwards
            // for the remaing nodes to get updated

            // for minimum (min will be updated by lazy[idx]);
            tree[idx] += lazy[idx];

            if (low != high)
            {
                // this means there is children
                lazy[2 * idx + 1] += lazy[idx];
                lazy[2 * idx + 2] += lazy[idx];
            }
            // make this zero as we have already make previous updates
            lazy[idx] = 0;
        }

        // no overlap
        // we don't do anything and return
        // low high l r or l r low high
        if (high < l or r < low)
            return;

        // complete overlap
        // l low high r
        if (low >= l and high <= r)
        {
            // update node and propogate to children

            // updation part

            // sum
            // tree[idx] += (high - low + 1) * val;

            // for minimum (min will be updated by lazy[idx]);
            tree[idx] += val;

            // if children
            if (low != high)
            {
                lazy[2 * idx + 1] += val;
                lazy[2 * idx + 2] += val;
            }
            return;
        }

        // last cahigh has to be no overlap cahigh
        int mid = (low + high) >> 1;

        updateLazy(2 * idx + 1, low, mid, l, r, val);
        updateLazy(2 * idx + 2, mid + 1, high, l, r, val);

        // updation part

        // sum
        // tree[idx] = tree[2 * idx + 1] + tree[2 * idx + 2];

        // for min
        tree[idx] = min(tree[2 * idx + 1], tree[2 * idx + 2]);
        return;
    }

public:
    int queryLazy(int idx, int low, int high, int l, int r)
    {
        // update if any prev updates remaining
        if (lazy[idx] != 0)
        {
            // updation part

            // sum
            // tree[idx] += (high - low + 1) * lazy[idx];

            // min
            tree[idx] += lazy[idx];

            // propogates the lazy updates downwards
            // for the remaing nodes to get updated
            if (low != high)
            {
                // this means there is children
                lazy[2 * idx + 1] += lazy[idx];
                lazy[2 * idx + 2] += lazy[idx];
            }
            // make this zero as we have already make previous updates
            lazy[idx] = 0;
        }

        // no overlap return 0;
        if (high < l or r < low)
        {
            // for sum
            // return 0;

            // for min
            return INT_MAX;
        }

        // complete overlap
        if (low >= l and high <= r)
            return tree[idx];

        int mid = (low + high) >> 1;
        int left = queryLazy(2 * idx + 1, low, mid, l, r);
        int right = queryLazy(2 * idx + 2, mid + 1, high, l, r);

        // updation part

        // sum
        // return left + right;

        // min
        return min(left, right);
    }

public:
    int queryTree(int idx, int low, int high, int l, int r)
    {
        // no overlap
        // l r low high or low high l r
        if (r < low or l > high)
            // return 0;
            return INT_MAX; // min

        // complete overlap
        // [l low high r]
        if (low >= l and high <= r)
            return tree[idx];

        // partial overlap
        int mid = (low + high) / 2;
        int left = queryTree(2 * idx + 1, low, mid, l, r);
        int right = queryTree(2 * idx + 2, mid + 1, high, l, r);

        // updation part
        // sum

        return left & right;

        // min
        // return min(left, right);
    }

public:
    void updateTree(int idx, int low, int high, int ind, int val)
    {
        if (low == high)
        {
            // sum ranges increment tree[idx] by val case
            // tree[idx] += val;

            // min and update single value case
            tree[idx] = val;
            return;
        }
        int mid = (low + high) >> 1;
        if (ind <= mid)
            updateTree(2 * idx + 1, low, mid, ind, val);
        else
            updateTree(2 * idx + 2, mid + 1, high, ind, val);

        // updation Part
        // sum

        // tree[idx] = tree[2 * idx + 1] + tree[2 * idx + 2];

        // min

        tree[idx] = min(tree[2 * idx + 1], tree[2 * idx + 2]);
    }

    void rangeUpdate(int l, int r, int val)
    {
        updateLazy(0, 0, N - 1, l, r, val);
    }

    int rangeQuery(int l, int r)
    {
        return queryLazy(0, 0, N - 1, l, r);
    }

    int query(int l, int r)
    {
        return queryTree(0, 0, N - 1, l, r);
    }

    void update(int ind, int val)
    {
        updateTree(0, 0, N - 1, ind, val);
    }

    void build()
    {
        buildTree(0, 0, N - 1);
    }
};
// SEG<int> seg(arr);

// seg.build();
// seg.buildTree(0,0,N-1);
// seg.query(l,r);
// seg.update(idx,val);
// seg.rangeQuery(l,r);
// seg.rangeUpdate(l,r,val);

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

        for (auto &itr : v)
            cin >> itr;

        SEG<int> seg(v);

        int q;
        cin >> q;

        vector<int> res;

        // int x = v[0];
        // for (auto &itr : v)
        // {
        //     x &= itr;
        //     cout << x << ' ';
        // }
        // cout << endl;

        while (q--)
        {
            int l, k;
            cin >> l >> k;
            --l;

            int r = n - 1;

            if (l > r)
                res.push_back(-1);
            else
            {
                int ans = -1;
                int low = l, high = r;

                while (low <= high)
                {
                    int mid = (low + high) >> 1;

                    int currQuery = seg.query(l, mid);

                    if (currQuery >= k)
                    {
                        ans = mid;
                        low = mid + 1;
                    }
                    else
                    {
                        high = mid - 1;
                    }
                }

                if (ans != -1)
                    res.push_back(ans + 1);
                else
                    res.push_back(-1);
            }
        }

        for (auto &itr : res)
            cout << itr << ' ';
        cout << endl;
    }
    return 0;
}