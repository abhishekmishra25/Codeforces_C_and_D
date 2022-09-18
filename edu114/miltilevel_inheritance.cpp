#include <bits/stdc++.h>
using namespace std;
class abb
{
public:
    abb()
    {
        cout << "constructor 1 called" << endl;
    }
};
class baa : public abb
{
public:
    baa()
    {
        cout << "constructor 2 called" << endl;
    }
};
class cab : public baa
{
public:
    cab()
    {
        cout << "construcotr 3 called " << endl;
    }
};
int main()
{
    cab b;

    return 0;
}