#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 유한소수 판별하기
*/

int solution(int a, int b)
{
    int answer = 0;

    int m = (a < b) ? a : b;
    int g = 1;
    int xa = a;
    int xb = b;
    for (int i = 2; i <= m;)
    {
        if (xa % i == 0 && xb % i == 0)
        {
            g *= i;
            xa /= i;
            xb /= i;
            continue;
        }
        else
            i++;
    }
    int db = b / g;
    answer = 1;
    for (int i = 2; db != 1;)
    {
        if (db % i == 0)
        {
            if (i != 2 && i != 5)
            {
                answer = 2;
                break;
            }
            db /= i;
            continue;
        }
        else
            i++;
    }
    return answer;
}

int main()
{
    cout << solution(7, 20) << endl;
    cout << solution(11, 22) << endl;
    cout << solution(12, 21) << endl;
    cout << solution(1, 100) << endl;
    cout << solution(1, 30) << endl;
    return 0;
}