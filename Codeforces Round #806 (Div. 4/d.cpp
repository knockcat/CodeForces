#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        vector<string> vs;
        map<string, int> mp;
        vector<bool> ans;
        vector<string> res;

        for (int i = 0; i < n; ++i)
        {
            string str;
            cin >> str;
            vs.push_back(str);
        }

        for (auto itr : vs)
            ++mp[itr];

        for (int i = 0; i < vs.size(); ++i)
        {
            bool flag = false;
            auto itr1 = mp.find(vs[i]);
            for (int j = 0; j < vs.size(); ++j)
            {
                auto itr2 = mp.find(vs[j]);
                string ans = itr1->first + itr2->first;
                res.push_back(ans);
            }
        }

        for (int i = 0; i < vs.size(); ++i)
        {
            if (find(res.begin(), res.end(), vs[i]) != res.end())
                ans.push_back(1);
            else
                ans.push_back(0);
        }

        for (auto itr : ans)
            cout << itr;
        cout << endl;
    }
}