#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 직각삼각형 출력하기
*/

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    /**
     * string 사용법
    */
    for (int i = 1; i <= n; i++)
        cout << string(i, '*') << endl;
    return 0;
}