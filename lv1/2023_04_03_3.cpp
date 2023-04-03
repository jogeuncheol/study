#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 가운데 글자 가져오기
*/

string solution(string s)
{
    string answer = "";

    answer = s.substr((s.length() % 2 == 0) ? s.length() / 2 - 1 : s.length() / 2, (s.length() % 2 == 0) ? 2 : 1);
    return answer;
}

int main()
{
    cout << solution("abcde") << endl;
    cout << solution("qwer") << endl;
    cout << solution("qw") << endl;
    cout << solution("q") << endl;
    return 0;
}