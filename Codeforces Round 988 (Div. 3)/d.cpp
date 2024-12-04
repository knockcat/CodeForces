#include <bits/stdc++.h>
using namespace std;

string solution(string &panel, vector<string> &codes)
{
    vector<string> ans;
    for (auto &str : codes)
    {
        string idx;
        for (int i = 0; i < str.size() - 1; ++i)
        {
            idx += str[i];
            string pattern = str.substr(i + 1);
            int idxx = stoi(idx);
            if (idxx < panel.size())
            {
                string chk = panel.substr(idxx, str.size() - i + 1);
                if (chk == pattern)
                {
                    ans.push_back(pattern);
                }
                else
                    ans.push_back("not found");
            }
            else
            {
                ans.push_back("not found");
            }
        }
    }
    return ans;
}

int32_t main()
{

    string str;
    cin >> str;
    int n;
    cin >> n;
    vector<string> codes(n);
    for (auto &s : codes)
        cin >> s;

    vector<string> ans = solution(str, codes);
    for(auto& str : ans) cout<<str<<endl;
}