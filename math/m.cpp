#include <iostream>

using namespace std;

int main()
{
    string n;
    int x;
    cin >> n >> x;

    long long finalResult = 0;
    for (int i = 0; i < n.size(); i++)
    {
        finalResult *= 10;
        finalResult += n[i] - '0';
        finalResult = finalResult % x;
    }

    finalResult == 0 ? cout << "YES" : cout << "NO";

    return 0;
}