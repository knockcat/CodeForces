#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
// #define int long long int
#define ll long long
int32_t main()
{
    // KNOCKCAT

    fast;
    string x;
    cin >> x;

    for (auto &digit : x)
    {
        if (digit > '4')
            digit = '9' - digit + '0';
    }

    if (x.front() == '0')
        x.front() = '9';
    cout << x << endl;
    return 0;
}