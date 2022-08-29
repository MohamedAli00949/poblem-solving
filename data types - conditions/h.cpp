#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n, m, x;
    cin>>n>>m;

    x = n / m;

    cout << "floor " <<n << " / " << m << " = "<<floor(x) <<endl;
    cout << "ceil " <<n << " / " << m << " = "<<ceil(x) <<endl;
    cout << "round " <<n << " / " << m << " = "<<round(x) <<endl;

    return 0;
}