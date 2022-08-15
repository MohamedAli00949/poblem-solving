#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, counter = 1;
    cin >> t;

    while (counter <= t)
    {
        long long n;
        cin >> n;

        long long x1[n], y1[n], x2[n], y2[n], minX, maxX, minY, maxY;

        cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
        maxX = x1[0], maxY = y1[0], minX = x2[0], minY = y2[0];

        for (long long i = 1; i < n; i++)
        {
            cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

            maxX = max(maxX, x1[i]);
            maxY = max(maxY, y1[i]);
            minX = min(minX, x2[i]);
            minY = min(minY, y2[i]);
        }

        if (minX > maxX && minY > maxY)
        {
            cout << "Case #" << counter << ": " << (minX - maxX) * (minY - maxY) << endl;
        }
        else
        {
            cout << "Case #" << counter << ": " << 0 << endl;
        }

        counter++;
    }

    return 0;
}