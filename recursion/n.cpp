#include <iostream>

using namespace std;

int r, c;
int matrixA[500][500], matrixB[500][500];

void sumMatrix(int rI)
{
    if (rI != r)
    {
        for (int i = 0; i<c; i++) {
            matrixA[rI][i] += matrixB[rI][i];
        }

        sumMatrix(++rI);
    }
}

int main()
{
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrixA[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrixB[i][j];
        }
    }
    sumMatrix(0);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrixA[i][j];
            j+1 == c ? cout<<endl : cout<<" ";
        }
    }

    return 0;
}