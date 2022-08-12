#include <bits/stdc++.h>
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
using namespace std;

int main()
{
    // Knockcat

    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            ++mp[v[i]];
        }

        if (n - mp.size() & 1)
            cout << mp.size() - 1<<endl;
        else
            cout << mp.size()<<endl;
    }
}