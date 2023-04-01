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

    /**
     * 분모의 소인수가 2 or 5
     * 분모가 2와 5로만 나눠지는지
    */
    while (b % 2 == 0)
        b /= 2;
    while (b % 5 == 0)
        b /= 5;
    answer = (a % b == 0) ? 1 : 2;
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