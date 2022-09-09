#include <bits/stdc++.h>
using namespace std;
#define cty cout << "YES"
#define ctn cout << "NO"
typedef long long int ll;
#define c(x) cout << (x)
#define csp(x) cout << (x) << " "
#define c1(x) cout << (x) << endl
#define c2(x, y) cout << (x) << " " << (y) << endl
#define f(i_itr, a, n) for (ll i_itr = a; i_itr < n; i_itr++)
#define rev_f(i_itr, n, a) for (ll i_itr = n; i_itr > a; i_itr--)
bool isPowerOfTwo(int x)
{
    return x && (!(x & (x - 1)));
}
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long lcm(int a, int b) { return (a / gcd(a, b)) * b; }
/*
 Best Of Luck :)
 author : Newbie RajkotiyaHarit
 */
void mat_dekh()
{
    int m, n;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int one = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '1')
            {
                one++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (s[i][j] == '0' && s[i][j + 1] == '0')
            {
                c(one);
                return;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '0' && s[i + 1][j] == '0')
            {
                c(one);
                return;
            }
        }
    }
    if (s[1][0] == '0' && s[0][1] == '0')
    {
        c(one);
        return;
    }
    if (s[1][m - 1] == '0' && s[0][m - 2] == '0')
    {
        c(one);
        return;
    }
    if (s[n - 2][0] == '0' && s[n - 1][1] == '0')
    {
        c(one);
        return;
    }
    if (s[n - 2][m - 1] == '0' && s[n - 1][m - 2] == '0')
    {
        c(one);
        return;
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            if (s[i][j] == '0')
            {
                if (s[i - 1][j] == '0')
                {
                    c(one);
                    return;
                }
                else if (s[i + 1][j] == '0')
                {
                    c(one);
                    return;
                }
                else if (s[i][j - 1] == '0')
                {
                    c(one);
                    return;
                }
                else if (s[i][j + 1] == '0')
                {
                    c(one);
                    return;
                }
                if (s[i - 1][j + 1] == '0')
                {
                    c(one);
                    return;
                }
                else if (s[i - 1][j - 1] == '0')
                {
                    c(one);
                    return;
                }
                else if (s[i + 1][j + 1] == '0')
                {
                    c(one);
                    return;
                }
                else if (s[i + 1][j - 1] == '0')
                {
                    c(one);
                    return;
                }
            }
        }
    }
    if (one == 0)
    {
        c(0);
        return;
    }
    if (one == m * n)
    {
        c(one - 2);
        return;
    }
    else
    {
        c(one - 1);
        return;
    }
}
int main()
{
    string *p = "abcde";
    cout << sizeof(p);
}