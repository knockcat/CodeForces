#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            v[i] = i+1;
        }

        if (v.size() & 1)
        {
            for (int i = 1; i < n; ++i)
            {
                swap(v[i], v[i + 1]);
                ++i;
            }
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                swap(v[i], v[i + 1]);
                ++i;
            }
        }

        for (auto itr : v)
            cout << itr << " ";
        cout << endl;
    }
    return 0;
}
