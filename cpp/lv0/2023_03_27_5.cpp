#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 숨어있는 숫자의 덧셈 (2)
*/

int solution(string my_string)
{
    int answer = 0;

    string str = "";
    for (char c : my_string)
    {
        if (c >= '0' && c <= '9')
            str += c;
        else if (!str.empty())
        {
            answer += stoi(str);
            str.clear();
        }
    }
    if (!str.empty())
        answer += stoi(str);
    return answer;
}

int main()
{
    cout << solution("aAb1B2cC34oOp") << endl;
    cout << solution("1a2b3c4d123Z") << endl;
    cout << solution("1a2b3c4d123Z7") << endl;
    return 0;
}