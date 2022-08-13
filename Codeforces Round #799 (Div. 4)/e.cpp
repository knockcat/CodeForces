#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl '\n';

int main()
{
    // KNOCKCAT

    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, sum;
        cin >> n >> sum;
        vector<int> v(n);
        vector<int> ovs, zvs;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] == 0)
                zvs.push_back(i);
            else
                ovs.push_back(i);
        }

        int s = accumulate(v.begin(), v.end(), 0);

        if (s == sum)
        {
            cout << 0 << endl;
        }
        else if (s < sum)
        {
            cout << -1 << endl;
        }
        else
        {
            int i = 0, j = n - 1;
            int k = 0, l = ovs.size() - 1;
            int count = 0;
            while (i < j)
            {
                if (sum == s)
                    break;
                int mn = ovs[k] - i + 1, mx = j - ovs[l] + 1;

                if (mn < mx)
                {
                    count += mn;
                    i += mn;
                    ++k;
                }
                else
                {
                    count += mx;
                    j -= mx;
                    --l;
                }
                s -= 1;
                // cout<<ovs[k] << " "<< i<<" "<<ovs[j] << " " << j <<" " <<mn<<" "<<mx<<" ";
                // cout<<"st "<<count<<endl;
            }
            cout << count << endl;
        }
    }
}