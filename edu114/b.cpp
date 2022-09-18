#include <iostream>

#include "hello.cpp"

using namespace std;
enum designFlags
{
    BOLD = 1,
    Italics = 2,
    Undeline = 4
};
int main()
{
    hello h1;
    h1.health = 70;
    h1.level = 'A';
    cout << h1.health << " " << h1.level << endl;
    enum season
    {
        spring = 34,
        summer = 4,
        autumn = 45,
        winter = 69
    };
    season today;
    today = autumn;
    cout << "season : " << today + 1;
    return 0;

    int myDesign = BOLD | Undeline;
    cout << myDesign;
}