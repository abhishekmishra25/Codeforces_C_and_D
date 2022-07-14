#include <bits/stdc++.h>
using namespace std;
#define ins(i, a, n) for (int i = a; i < n; i++)
#define des(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define ll long long
#define all(v) v.begin(), v.end()
#define pqueue priority_queue
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const ll inf = 1e18;
const int N = 1e5 + 5;
#define print(a) cout << a << endl
class solution
{
public:
    void postcard(int k, string s)
    {
        int lenS = 0, snowflake = 0, candyCane = 0;
        for (char c : s)
        {
            if (c == '*')
                snowflake++;
            else if (c == '?')
                candyCane++;
            else
                lenS++;
        }

        if (k < lenS)
        {
            if (lenS - (snowflake + candyCane) > k)
            {
                print("Impossible");
                return;
            }

            string ans;
            int left = lenS - k;
            ins(i, 0, s.size())
            {
                char c = s[i + 1];
                if ((c == '*' || c == '?') && left > 0)
                {
                    left--;
                    continue;
                }
                else if (s[i] != '*' && s[i] != '?')
                {
                    ans += s[i];
                }
            }

            print(ans);
        }
        else
        {
            if (k > lenS && snowflake == 0)
            {
                print("Impossible");
                return;
            }

            string ans;
            int need = k - lenS;
            ins(i, 0, s.size())
            {
                char c = s[i + 1];
                if (c == '*' && need > 0)
                {
                    ans += s[i];
                    while (need--)
                        ans += s[i];
                }
                else if (s[i] != '*' && s[i] != '?')
                {
                    ans += s[i];
                }
            }

            print(ans);
        }
    }
};

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    solution ob1;
    ob1.postcard(k, s);
    return 0;
}