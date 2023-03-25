#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 자릿수 더하기
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
    cout << solution(1234) << endl;
    cout << solution(930211) << endl;
    return 0;
}