#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 숨어있는 숫자의 덧셈(1)
*/

int solution(string my_string)
{
    int answer = 0;

    for (char str : my_string)
    {
        int num = str - '0';
        if (num >= 0 && num <= 9)
            answer += num;
    }
    return answer;
}

int main()
{
    cout << solution("1q2w3e4r") << endl;
    return 0;
}