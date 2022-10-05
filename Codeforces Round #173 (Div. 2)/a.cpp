#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
#define int long long int
int32_t main()
{
    // KNOCKCAT

    fast;
    int n;
    cin >> n;
    int a = 0;
    while (n--)
    {
        string str;
        cin >> str;

        if (str == "++X" or str == "X++")
            ++a;
        else
            --a;
    }

    cout << a << endl;
}