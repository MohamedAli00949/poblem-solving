#include <iostream>

using namespace std;

int main()
{
    int rA, cA, rB, cB;
    cin >> rA >> cA;

    int matrixA[rA][cA];
    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            cin >> matrixA[i][j];
        }
    }

    cin >> rB >> cB;

    int matrixB[rB][cB];
    for (int i = 0; i < rB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            cin >> matrixB[i][j];
        }
    }

    // cout << endl;

    long long result[rA][cB];

    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            int sum = 0;
            for (int x = 0; x < cA; x++)
            {
                int numA = matrixA[i][x];
                int numB = matrixB[x][j];
                sum += numA * numB;
                // cout << j << " - " << x << ") * (" << x << " - " << j << endl;
            }
            result[i][j] = sum;
        }
    }
    // cout << endl;
    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}