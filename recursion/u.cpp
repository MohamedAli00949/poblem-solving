#include <iostream>
#include <vector>

using namespace std;

int knapsack(int n, int w, int wItems[], int vItems[])
{
    if (w == 0 || n == 0)
    {
        return 0;
    }

    if (wItems[n - 1] > w)
    {
        return knapsack(n - 1, w, wItems, vItems);
    }
    else
    {
        return max(vItems[n - 1] + knapsack(n - 1, w - wItems[n - 1], wItems, vItems), knapsack(n - 1, w, wItems, vItems));
    }
}

int main()
{
    int n, w;
    cin >> n >> w;

    int wItems[n], vItems[n];

    for (int i = 0; i < n; i++)
    {
        cin >> wItems[i] >> vItems[i];
    }

    cout << knapsack(n, w, wItems, vItems);

    return 0;
}