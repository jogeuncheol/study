#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 구슬을 나누는 경우의 수
 * ! integer : -2147483648 ~ 2147483647
*/

int solution(int balls, int share)
{
    int answer = 0;

    long b = balls - share + 1;
    long mul = 1;
    for (long i = 1; i <= share; i++, b++)
        mul = (mul * b) / i;
    answer = mul;
    return answer;
}

int main()
{
    cout << solution(5, 4) << endl;
    cout << solution(5, 2) << endl;
    cout << solution(30, 29) << endl;
    cout << solution(30, 28) << endl;
    cout << solution(30, 15) << endl;
    cout << solution(30, 16) << endl;
    cout << solution(29, 1) << endl;
    cout << solution(29, 16) << endl;
    return 0;
}