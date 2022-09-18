// #pragma GCC optimize('Ofast')
// #pragma GCC target('avx,avx2,fma')
#include <bits/stdc++.h>
using namespace std;

class animal
{
public:
    int age;
    int weight;

public:
    void speek()
    {
        cout << " speeking ";
    }
};
class dog : public animal
{
};
class gemansheford : public dog
{
};
int main()
{

    gemansheford d;
    d.speek();
    cout << d.age << endl;
    return 0;
}