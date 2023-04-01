#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * n 이하 짝수들의 합
*/

int solution(int n)
{
    int answer = 0;

    for (n = (n % 2 == 0) ? n : n - 1; n >= 2; n -= 2)
        answer += n;

    /**
     * Good
    */
    n = 10;
    answer = n / 2;
    answer *= answer + 1;
    return answer;
}

int main()
{
    cout << solution(4) << endl;
    return 0;
}