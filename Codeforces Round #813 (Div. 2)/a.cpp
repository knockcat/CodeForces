#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        if (v.size() == k)
            cout << 0 << endl;
        else
        {
            int count = 0;
            for (int i = 0; i < k; ++i)
            {
                if (v[i] <= k)
                    ++count;
            }

            cout << k - count << endl;
        }
    }
    return 0;
}