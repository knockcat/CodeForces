#include <bits/stdc++.h>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;

        if (n == 1)
            cout << 2 << endl;
        else if (n % 3 == 0)
            cout << n / 3 << endl;
        else
            cout<<(n/3)+1<<endl;
       
    }
    return 0;
}