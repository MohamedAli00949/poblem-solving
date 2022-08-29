#include <iostream>
#include <string>

using namespace std;

int main()
{
    double n;
    cin >> n;

    string interval1 = "Interval [0,25]";
    string interval2 = "Interval (25,50]";
    string interval3 = "Interval (50,75]";
    string interval4 = "Interval (75,100]";

    if (n >= 0 & n <= 25)
    {
        cout << interval1;
    }
    else if (n > 25 & n <= 50)
    {
        cout << interval2;
    }
    else if (n > 50 & n <= 75)
    {
        cout << interval3;
    }
    else if (n > 75 & n <= 100)
    {
        cout << interval4;
    }
    else
    {
        cout << "Out of Intervals";
    }

    return 0;
}