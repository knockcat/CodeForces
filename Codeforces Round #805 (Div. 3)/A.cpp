#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long n;
        cin >> n;

        string str = to_string(n);
        int len = str.size();

        long long ind = pow(10, len - 1);

        cout << n - ind << endl;
    }
}
