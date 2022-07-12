#include <bits/stdc++.h>
using namespace std;
#define ins(i, a, n) for (int i = a; i < n; i++)
#define des(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define ll long long

class solution
{
private:
    static bool mycmp(pair<int, int> &a, pair<int, int> &b)
    {
        return a.second - a.first > b.second - b.first;
    }

public:
    int maxSpent(int n, int k, vector<int> price1, vector<int> price2)
    {
        pair<int, int> price[n];
        for (int i = 0; i < n; i++)
        {
            price[i] = make_pair(price1[i], price2[i]);
        }
        sort(price, price + n, mycmp);
        // ins(i, 0, n) cout << price[i].first << " " << price[i].second << endl;
        int ans = 0;
        for (int i = 0; i < k; i++)
            ans += price[i].first;
        for (int j = k; j < n; j++)
            ans += min(price[j].first, price[j].second);
        return ans;
    }
};
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> price1(n, 0);
    ins(i, 0, n) cin >> price1[i];
    // ins(i, 0, n) cout << price1[i] << " ";
    // cout << endl;
    vector<int> price2(n, 0);
    ins(i, 0, n) cin >> price2[i];
    // ins(i, 0, n) cout << price2[i] << " ";
    // cout << endl;
    solution ob1;

    cout << ob1.maxSpent(n, k, price1, price2);
    return 0;
}