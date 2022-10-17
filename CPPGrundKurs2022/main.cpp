#include <iostream>

using namespace std;

int addierer(int i, int j)
{
    cout << i << " " << j << endl;
    return i + j;
}

int main()
{
    int i = 2;
    int j = 3;

    cin >> i >> j;
    cout << addierer(i, j) << endl;

    return 0;
}
