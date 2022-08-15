#include <bits/stdc++.h>

using namespace std;

int main()
{
    /**
     * (0, 0)   (0, 2)  (2, 0) (2, 2)
     * 1(x, y) 2(x, y) 3(x, y)
     *
     * find the max and min for x and y :
     *
     * at the above example we found that
     * minX = 0, maxX = 2 and
     * minY = 0, maxY = 2
     */
    float x1, y1, x2, y2, x3, y3, x4, y4, minX, maxX, minY, maxY;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    minX = min(min(x1, x2), min(x3, x4));
    maxX = max(max(x1, x2), max(x3, x4));

    minY = min(min(y1, y2), min(y3, y4));
    maxY = max(max(y1, y2), max(y3, y4));

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // p (x, y)
        float x, y;
        cin >> x >> y;

        if ((minX <= x && maxX >= x) && (minY <= y && maxY >= y))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}