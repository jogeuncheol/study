#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 제곱수 판별하기
*/

int solution(int n)
{
    int answer = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (i * i == n)
        {
            answer = 1;
            break;
        }
        else
            answer = 2;
    }
    if (n == 1)
        answer = 1;
    return answer;
}

int main()
{
    cout << solution(144) << endl;
    cout << solution(100) << endl;
    cout << solution(121) << endl;
    cout << solution(1) << endl;
    cout << solution(2) << endl;
    return 0;
}