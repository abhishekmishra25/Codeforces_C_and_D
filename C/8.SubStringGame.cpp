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
    void subStringGame(string s)
    {
        print("Mike");
        char st = s[0];
        ins(i, 1, s.length())
        {
            if (s[i] <= st)
                print("Mike");
            else
                print("Ann");
            st = min(st, s[i]);
        }
    }
};
int main()
{
    string s;
    cin >> s;
    solution bo1;
    bo1.subStringGame(s);
    return 0;
}