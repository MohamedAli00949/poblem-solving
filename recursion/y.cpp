#include <iostream>

using namespace std;

int way(int num, int s, int e)
{
    if (num >= e)
    {
        return num == e;
    }

    return way(num + 1, s, e) + way(num + 2, s, e) + way(num + 3, s, e);
}

int main()
{
    int s, e;
    cin >> s >> e;

    cout << way(s, s, e) << endl;

    return 0;
}