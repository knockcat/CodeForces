#include<bits/stdc++.h>
using namespace std;
#define fast std::ios::sync_with_stdio(false);cin.tie(nullptr);
#define int long long int

int count_digit(int num)
{
    int count = 0;
    while(num)
    {
        ++count;
        num /= 10;
    }
    return count;
}

int32_t main()
{
    int tt;
    cin >> tt;

    while(tt--)
    {
        int n;
        cin >> n;
        int count = 0;
        vector<int> A(n), B(n);
        priority_queue<int> pq1, pq2;


        for(int i = 0; i<n; ++i)
        {
            cin >> A[i];
            pq1.push(A[i]);
        }

        for(int j = 0; j<n; ++j)
        {
            cin >> B[j];
            pq2.push(B[j]);
        }
        
        while(!pq1.empty() && !pq2.empty())
        {
            int a = pq1.top();
            int b = pq2.top();

            if(a == b)
            {
                pq1.pop();
                pq2.pop();
            }
            else if(a > b)
            {
                ++count;
                pq1.pop();
                pq1.push(count_digit(a));
            }
            else
            {
                ++count;
                pq2.pop();
                pq2.push(count_digit(b));
            }
        }

        cout<<count<<endl;
    }
}