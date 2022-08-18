#include <bits/stdc++.h>
using namespace std;
#define std                        \
    ::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; ++i)
            cin >> v[i];

        sort(v.begin(), v.end());

        cout << v[n - 1] + v[n - 2] - v[0] - v[1] << endl;
    }

    return 0;
}