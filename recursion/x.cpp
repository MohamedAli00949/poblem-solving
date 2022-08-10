#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[11][11];

int maxmumPath(int start, int end)
{
    if (start == n - 1 && end == m - 1)
    {
        return arr[start][end];
    }
    else if (start == n + 1 || end == m + 1)
    {
        return -1000000;
    }

    int right = maxmumPath(start, end + 1);
    int down = maxmumPath(start + 1, end);

    return arr[start][end] + max(right, down);
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << maxmumPath(0, 0) << endl;

    return 0;
}