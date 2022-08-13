#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int hr;
int mi;

void convert_To_Minutes(string s)
{
    hr = 0;
    mi = 0;
    bool flag = 0;
    for (auto it : s)
    {
        if (it == ':')
        {
            flag = 1;
            continue;
        }
        if (flag == 0)
            hr = hr * 10 + it - '0';
        else
            mi = mi * 10 + it - '0';
    }
}

int addTime(int m)
{
    int t = 0;
    int ans = 0;
    int flag = 1;
    while (flag)
    {
        t += m;
        mi += m;
        hr += mi / 60;
        hr %= 24;
        mi %= 60;
        string s;
        if (hr < 10)
            s += '0';
        s += to_string(hr);
        if (mi < 10)
            s += '0';
        s += to_string(mi);

        string rs = s;
        reverse(rs.begin(), rs.end());
        if (rs == s)
            ++ans;

        if (t % 1440 == 0)
            flag = 0;
    }
    return ans;
}

int main()
{
    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        string str;
        cin >> str;
        int x;
        cin >> x;

        convert_To_Minutes(str);
        int ans = addTime(x);

        cout << ans << endl;
    }
}