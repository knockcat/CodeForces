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
long long cnt[2][2];
int32_t main()
{
    fast;
    // int tt;
    // cin >> tt;
    // while (tt--)
    // {
    //     // Knockcat

    // }
    string s;
    cin >> s;
    int N = s.size();
    long long odd = 0, even = 0;
    int cur = 0, next;
    for (int i = 0; i < N; ++i)
    {
        next = (cur + 1) % 2;
        odd += cnt[s[i] - '0'][cur];
        even += cnt[s[i] - '0'][next];
        odd++;
        cnt[s[i] - '0'][cur]++;
        cur = next;
    }
    cout << even << " " << odd << endl;

    return 0;
}
