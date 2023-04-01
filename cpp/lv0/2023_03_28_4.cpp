#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 저주의 숫자 3
 * 3의 배수와 3이 포함되지 않는 숫자
*/

int solution(int n)
{
    int answer = 0;

    for (int i = 1; i <= n; ++i)
    {
        answer++;
        while (answer % 3 == 0 || to_string(answer).find("3") != string::npos)
            answer++;
    }
    return answer;
}

int main()
{
    for (int i = 1; i <= 40; i++)
        cout << i << ": " << solution(i) << endl;
    return 0;
}