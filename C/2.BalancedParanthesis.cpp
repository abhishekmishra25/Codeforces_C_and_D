#include <bits/stdc++.h>
using namespace std;
#define ins(i, a, n) for (int i = 1; i < n; i++)
#define des(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define ll long long

int main()
{
    ll n, b = 0, m;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            b++;
        }
        if (s[i] == ')')
        {
            b--;
        }
        m = min(m, b);
    }
    if (b == 0 && m >= -1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}