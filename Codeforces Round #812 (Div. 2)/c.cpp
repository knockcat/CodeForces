#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int k = 1;
        while (k * k < n)
        {
            k++;
        }

        k++;
        vector<int> ans(n, -1);
        set<int> s;
        for (int i = 0; i < n; i++)
            s.insert(i);

        for (int i = k; i >= 0; i--)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (ans[j] != -1)
                    continue;

                int req = (i * i) - j;
                if (req < 0)
                    break;

                if (s.find(req) != s.end())
                {
                    s.erase(req);
                    ans[j] = req;
                }
            }
        }

        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
}