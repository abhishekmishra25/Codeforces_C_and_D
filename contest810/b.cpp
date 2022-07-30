#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        pair<int, int> mf[m];
        map<long long, long long> freq;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            mf[i] = make_pair(x, y);
            freq[x]++;
            freq[y]++;
        }
        if (m % 2 == 0)
        {
            cout << 0 << "\n";
            continue;
        }
        pair<int, int> pf[n];
        for (int i = 0; i < n; i++)
        {
            pf[i] = make_pair(arr[i], i + 1);
        }
        sort(pf, pf + n);
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (freq.find(pf[i].second) != freq.end())
            {
                if (freq[pf[i].second] % 2 != 0)
                {
                    for (auto y : mf[pf[i].second])
                        if (freq(pf[i].second) % 2 == 0)
                            ans = min(ans, pf[i].first + arr[y - 1]);
                }
            }
            else
            {
                ans = min(ans, pf[i].first);
            }
        }
        cout << ans << endl;
    }
}