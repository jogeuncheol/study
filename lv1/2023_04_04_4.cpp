#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 이상한 문자 만들기
*/

string solution(string s)
{
    string answer = "";

    int idx = 0;
    for (char c : s)
    {
        if (c == ' ')
        {
            idx = 0;
            answer += c;
        }
        else
            answer += (idx++ & 1) ? tolower(c) : toupper(c);
    }
    return answer;
}

int main()
{
    cout << solution("try hello world") << endl;
    return 0;
}