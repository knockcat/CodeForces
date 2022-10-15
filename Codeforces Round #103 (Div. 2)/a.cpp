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

float distance(int x1, int y1, int x2, int y2)
{
    // Calculating distance
    // cout << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0)<<endl;
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

int32_t main()
{
    fast;
    int n, p[100], a = 0, b = 0, s;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i];
    int max = p[0], min = p[0];
    for (int i = 1; i < n; i++)
    {
        if (p[i] > max)
        {
            max = p[i];
            a = i;
        }
        if (p[i] <= min)
        {
            min = p[i];
            b = i;
        }
    }
    if (a < b)
        s = a + n - 1 - b;
    else
        s = a + n - 1 - b - 1;
    cout << s << endl;
    return 0;
}
