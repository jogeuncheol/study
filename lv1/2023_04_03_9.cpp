#include <iostream>

using namespace std;

/**
 * 직사각형 별찍기
*/

int main()
{
    int n;
    int m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << "*";
        cout << endl;
    }
    return 0;
}