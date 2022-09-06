#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
// #define int long long int

void rotateRight(vector<int> &arr, int n)
{
    int temp = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = temp;
}

void left_rotate_by_one(vector<int> &arr, int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[i] = temp;
}

int32_t main()
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
        int mx = INT_MIN, mn = INT_MAX;

        if(v.size() == 1)
        {
            cout<<0<<endl; continue;
        }
        for(int i = 0; i<n; ++i)
        {
            if(i != 0 and mx <= v[i])
                mx = max(mx,v[i]);
            if(i != n-1 and mn >= v[i])
                mn = min(mn,v[i]);
        }

        int ans = mx - mn;
        ans = max(mx-v[0], v[v.size()-1]-mn);

        for(int i = 0; i<n-1; ++i)
        {
            ans = max(ans, v[i]- v [i+1]);
        }

        cout<<ans<<endl;
    }

    return 0;
}