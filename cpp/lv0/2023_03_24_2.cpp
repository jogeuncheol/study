#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 대문자와 소문자
*/

string solution(string my_string)
{
    string answer = "";

    for (char s : my_string)
    {
        if (islower(s))
            answer += toupper(s);
        else
            answer += tolower(s);
    }
    return answer;
}

int main()
{
    cout << solution("cccCCCC") << endl;
    return 0;
}