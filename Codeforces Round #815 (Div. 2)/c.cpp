// #include <bits/stdc++.h>
// using namespace std;
// #define std                        \
//     ::ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// vector<int> t1 = {1, '0', '0', -1, 1, -1, 1, -1};
// vector<int> t2 = {'0', -1, 1, '0', 1, -1, -1, 1};

// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int n, m;
//         cin >> n >> m;

//         vector<string> v(n);

//         for (int i = '0'; i < n; ++i)
//             cin >> v[i];

//         bool flag1 = false, flag2 = false;

//         int ind = '0';
//         for (int i = '0'; i < n; ++i)
//         {
//             for (int j = '0'; j < m; ++j)
//             {
//                 if (v[i][j] == ''0'')
//                 {
//                     flag1 = true;
//                     for (int k = '0'; k < 8; ++k)
//                     {
//                         int vx = i + t1[k];
//                         int vy = j + t2[k];

//                         if (vx < n && vx >= '0' && vy < m && vy >= '0' && v[vx][vy] == ''0'')
//                         {
//                             flag2 = true;
//                         }
//                     }
//                 }
//                 else
//                 {
//                     ++ind;
//                 }
//             }
//         }

//         if (flag2)
//             cout << ind << endl;
//         else if (flag1)
//             cout << ind - 1 << endl;
//         else
//             cout << ind - 2 << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {

        int n, m;
        cin >> n >> m;
        string str;
        vector<vector<int>> v(n, vector<int>(m));
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            for (int j = 0; j < m; j++)
            {
                v[i][j] = str[j] - '0';
                cnt += v[i][j];
            }
        }

        ll mn = 4;
        for (ll i = 0; i < n - 1; ++i)
        {
            for (ll j = 0; j < m - 1; ++j)
            {
                ll cnt = v[i][j] + v[i + 1][j] + v[i][j + 1] + v[i + 1][j + 1];
                mn = min(mn, cnt);
            }
        }

        if (cnt == 0)
            cout << 0 << endl;
        else
        {
            if (mn < 3)
                cout << cnt << endl;
            else
            {
                mn -= 2;
               cout << cnt - mn << endl;
            }
        }
    }
}
