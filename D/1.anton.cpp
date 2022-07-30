#include <bits/stdc++.h>

using namespace std;
class solution
{
public:
    void solu(string s)
    {
        vector<int> sf(26, 0);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] - 'a' > 26 || s[i] - 'a' < 0)
                continue;
            else
                sf[s[i] - 'a']++;
        }
        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (sf[i] != 0)
                count++;
        }
        cout << count << "\a" << endl;
    }
};
int main()
{
    string s;
    getline(cin, s);
    solution ob;
    ob.solu(s);
    return 0;
}