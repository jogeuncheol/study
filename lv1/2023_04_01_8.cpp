#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 정수 제곱근 판별
*/

long long solution(long long n)
{
    long long answer = 0;

    if (n == 1) return 4;
    for (long long i = 1; i <= n / 2; ++i)
    {
        if (i * i == n)
        {
            answer = i + 1;
            break;
        }
    }
    answer = answer ? answer * answer : -1;
    return answer;
}

int main()
{
    cout << solution(121) << endl;
    cout << solution(3) << endl;
    cout << solution(1) << endl;
    return 0;
}