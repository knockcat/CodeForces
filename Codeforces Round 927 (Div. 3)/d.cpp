// JAI SHREE RAM
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
const ll eps = -1e9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;

        char trump;
        cin >> trump;

        vector<string> here(2 * n);

        for (auto &str : here)
            cin >> str;

        vector<string> C, D, H, trumptype;

        for (auto &itr : here)
        {
            if (itr[1] == 'C')
                C.push_back(itr);
            else if (itr[1] == 'D')
                D.push_back(itr);
            else if (itr[1] == 'H')
                H.push_back(itr);
            else
                trumptype.push_back(itr);
        }

        if (trump == 'C')
            swap(C, trumptype);
        else if (trump == 'D')
            swap(D, trumptype);
        else if (trump == 'H')
            swap(H, trumptype);

        vector<string> FormPairs;

        sort(C.begin(), C.end());
        sort(D.begin(), D.end());
        sort(H.begin(), H.end());
        sort(trumptype.begin(), trumptype.end());

        if (C.size() & 1)
            FormPairs.push_back(C[0]);
        if (D.size() & 1)
            FormPairs.push_back(D[0]);
        if (H.size() & 1)
            FormPairs.push_back(H[0]);

        if (FormPairs.size() > trumptype.size())
        {
            cout << "IMPOSSIBLE" << endl;
        }
        else
        {
            int sz = trumptype.size();
            int sz2 = FormPairs.size();

            int left = sz - sz2;

            if (left & 1)
            {
                cout << "IMPOSSIBLE" << endl;
            }
            else
            {
                int k = 0;
                for (int i = 0; i < FormPairs.size(); ++i)
                {
                    cout << FormPairs[i] << ' ' << trumptype[k++] << endl;
                }
                for (int j = k; j < trumptype.size(); j += 2)
                {
                    cout << trumptype[j] << ' ' << trumptype[j + 1] << endl;
                }

                if (C.size() & 1)
                {
                    for (int i = 1; i < C.size(); i += 2)
                    {
                        cout << C[i] << ' ' << C[i + 1] << endl;
                    }
                }
                else
                {
                    for (int i = 0; i < C.size(); i += 2)
                    {
                        cout << C[i] << ' ' << C[i + 1] << endl;
                    }
                }
                if (D.size() & 1)
                {
                    for (int i = 1; i < D.size(); i += 2)
                    {
                        cout << D[i] << ' ' << D[i + 1] << endl;
                    }
                }
                else
                {
                    for (int i = 0; i < D.size(); i += 2)
                    {
                        cout << D[i] << ' ' << D[i + 1] << endl;
                    }
                }
                if (H.size() & 1)
                {
                    for (int i = 1; i < H.size(); i += 2)
                    {
                        cout << H[i] << ' ' << H[i + 1] << endl;
                    }
                }
                else
                {
                    for (int i = 0; i < H.size(); i += 2)
                    {
                        cout << H[i] << ' ' << H[i + 1] << endl;
                    }
                }
            }
        }
    }
    return 0;
}