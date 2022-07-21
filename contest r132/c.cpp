
/*
author: Abhishek Mishra
don't copy my fuckin solution
*/
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
    vector<int> dorep(string str)
    {
        int paran = 0, ques = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
            {
                paran++;
            }
            else if (str[i] == ')')
            {
                paran--;
            }
            else if (str[i] == '?')
            {
                ques++;
            }
        }
        return {paran, ques};
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        solution ob1;
        vector<int> y = ob1.dorep(st);
        ll paran = y[0];
        paran = abs(paran);
        ll ques = y[1];
        if (paran == ques)
        {
            cout << "YES\n";
        }
        else if (paran == 0 && ques == 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}