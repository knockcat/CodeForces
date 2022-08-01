// https://codeforces.com/contest/1714

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        map<int, int> mp;
        int count = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            ++mp[v[i]];
            if (mp[v[i]] > 1)
            {
                break;
            }
            ++count;
        }

        cout << n - count << '\n';
    }
}