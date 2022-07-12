#include <bits/stdc++.h>
using namespace std;
#define ins(i, a, n) for (int i = 1; i < n; i++)
#define des(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define ll long long
class solutoin
{
public:
    ll int LunarNewYear(vector<int> &a, int n)
    {
        sort(a.begin(), a.end());
        ll ans = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            ans += 1LL * (a[i] + a[n - i + 1]) * (a[i] + a[n - i + 1]);
        }
        return ans;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    solutoin on1;
    cout << on1.LunarNewYear(arr, n);
    return 0;
}