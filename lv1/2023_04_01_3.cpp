#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 자릿수 더하기
 * 0 < n <= 100000000
*/

int solution(int n)
{
    int answer = 0;

    while (n)
    {
        answer += n % 10;
        n /= 10;
    }
    return answer;
}

int main()
{
    cout << solution(123) << endl;
    cout << solution(987) << endl;
    return 0;
}