#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
#define int long long int
int32_t main()
{
    // KNOCKCAT

    fast;

    vector<int> v(3);
    for (int i = 0; i < 3; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    cout << v[1] - v[0] + v[2] - v[1] << endl;

    return 0;
}
