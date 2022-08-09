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
        string str;
        cin >> str;

        transform(str.begin(), str.end(), str.begin(), ::tolower);

        (str == "yes") ? cout << "YES" << endl : cout << "NO" << endl;
    }
}
