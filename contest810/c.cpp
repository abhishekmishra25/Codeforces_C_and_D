
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<long long, long long> arr(k, 0);
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        vll rr(k), cl(k);
        for (int i = 0; i < k; i++)
        {
            rr[i] = arr[i] / m;
            cl[i] = arr[i] / n;
        }

        ll rrs = 0, rrcc = 0, cls = 0, clcc = 0;

        for (int i = 0; i < k; i++)
        {
            if (rr[i] > 2)
            {
                rrs += rr[i];
            }
            else if (rr[i] == 2)
            {
                rrcc++;
            }
            if (cl[i] > 2)
            {
                cls += cl[i];
            }
            else if (cl[i] == 2)
            {
                clcc++;
            }
        }

        if (rrs >= n or cls >= m)
        {
            cout << "Yes" << endl;
            continue;
        }

        if (!((n - rrs) % 2) and rrcc >= (n - rrs) / 2)
        {
            cout << "Yes" << endl;
            continue;
        }

        if (!((m - cls) % 2) and clcc >= (m - cls) / 2)
        {
            cout << "Yes" << endl;
            continue;
        }

        cout << "No" << endl;
    }
    return 0;
}