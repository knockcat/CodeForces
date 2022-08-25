#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << n << endl;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
            a[i] = i + 1;
        }
        cout << endl;

        for (int i = 1; i < n; i++)
        {
            swap(a[i], a[0]);
            for (auto it : a)
                cout << it << " ";

            cout << endl;
        }
    }
}
