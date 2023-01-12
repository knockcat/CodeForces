#include <iostream>
#include <vector>
using namespace std;

bool solve()
{
    int nbElem;
    cin >> nbElem;

    int extSize = nbElem + 2;
    vector<int> orig(extSize), target(extSize);
    vector<int> diff(extSize, 0);

    for (int iElem = 1; iElem <= nbElem; ++iElem)
    {
        cin >> orig[iElem];
    }

    for (int iElem = 1; iElem <= nbElem; ++iElem)
    {
        cin >> target[iElem];
        diff[iElem] = target[iElem] - orig[iElem];
    }

    int cntModif = 0;
    for (int iElem = 0; iElem < extSize - 1; ++iElem)
    {
        if (diff[iElem] < 0)
        {
            return false;
        }
        if (diff[iElem] != diff[iElem + 1])
        {
            ++cntModif;
        }
    }

    return (cntModif <= 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int nbQueries;
    cin >> nbQueries;

    for (int iQuery = 0; iQuery < nbQueries; ++iQuery)
    {
        if (solve())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}