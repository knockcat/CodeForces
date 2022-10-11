// KNOCKCAT

#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long int
#define endl "\n"

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll eps = 1e-9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        string str1, str2;
        cin >> str1 >> str2;
        if (str1.size() == 1 and str2.size() == 1)
        {
            if (str1[0] == str2[0])
            {
                cout << "=" << endl;
            }
            else if (str1[0] == 'L')
            {
                cout << ">" << endl;
            }
            else if (str2[0] == 'L')
            {
                cout << "<" << endl;
            }
            else if (str1[0] == 'M')
            {
                cout << ">" << endl;
            }
            else if (str2[0] == 'M')
                cout << "<" << endl;
        }
        else
        {
            if (str1.back() == 'L' && str2.back() == 'L')
            {
                if (str1.size() == str2.size())
                    cout << "=" << endl;
                else if (str1.size() > str2.size())
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else if (str1.back() == 'S' && str2.back() == 'S')
            {
                if (str1.size() == str2.size())
                    cout << "=" << endl;
                else if (str1.size() > str2.size())
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << ">" << endl;
                }
            }
            else
            {
                if (str1.back() == 'L')
                    cout << ">" << endl;
                else
                    cout << "<" << endl;
            }
        }
    }
    return 0;
}