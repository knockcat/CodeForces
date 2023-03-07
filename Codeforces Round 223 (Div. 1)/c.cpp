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

class Node
{
public:
    int open, close, full;
    Node(int _open, int _close, int _full)
    {
        open = _open;
        close = _close;
        full = _full;
    }
    Node()
    {
        this->open = 0;
        this->close = 0;
        this->full = 0;
    }
};

template <typename T>
class SEG
{
public:
    string v;
    vector<T> seg;
    int N;
    SEG() {}
    SEG(string arr)
    {
        N = arr.size();
        v.resize(N);
        for (int i = 0; i < N; ++i)
            v[i] = arr[i];

        seg.resize(N * 4 + 5);
        buildTree(0, 0, N - 1);
    }

    Node merge(Node l, Node r)
    {
        Node curr = Node(0, 0, 0);
        int mn = min(l.open, r.close);
        curr.full = (l.full + r.full + mn);
        curr.open = (l.open + r.open - mn);
        curr.close = (l.close + r.close - mn);

        return curr;
    }

    void buildTree(int idx, int low, int high)
    {
        if (low == high)
        {
            Node temp = Node(0, 0, 0);
            if (v[low] == '(')
                temp.open = 1;
            else
                temp.close = 1;
            seg[idx] = temp;
            return;
        }

        int mid = (low + high) >> 1;
        buildTree(2 * idx + 1, low, mid);
        buildTree(2 * idx + 2, mid + 1, high);

        Node l = seg[2 * idx + 1];
        Node r = seg[2 * idx + 2];

        seg[idx] = merge(l, r);
    }

    Node query(int idx, int low, int high, int l, int r)
    {
        // no overlap
        // l r low high or low high l r
        if (r < low or l > high)
            return Node();

        // complete overlap
        // [l low high r]
        if (low >= l and high <= r)
            return seg[idx];

        // partial overlap
        int mid = (low + high) / 2;
        Node left = query(2 * idx + 1, low, mid, l, r);
        Node right = query(2 * idx + 2, mid + 1, high, l, r);

        // update
        return merge(left, right);
    }

    Node query(int l, int r)
    {
        return query(0, 0, N - 1, l, r);
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

    string str;
    cin >> str;

    SEG<Node> seg(str);

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        --l, --r;

        Node ans = seg.query(l, r);
        cout << ans.full * 2 << endl;
    }

    return 0;
}