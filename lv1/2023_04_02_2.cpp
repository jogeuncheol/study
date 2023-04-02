#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 문자열을 정수로 바꾸기
*/

int solution(string s)
{
    int answer = 0;

    bool sign = false;
    for (char c : s)
    {
        if (c == '-' || c == '+')
            sign = (c == '-') ? true : false;
        else
        {
            answer *= 10;
            answer += c - '0';
        }
    }
    if (sign)
        answer *= -1;
    return answer;
}

int main()
{
    cout << solution("1234") << endl;
    cout << solution("-1234") << endl;
    cout << solution("+1234") << endl;
    return 0;
}