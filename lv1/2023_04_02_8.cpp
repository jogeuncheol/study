#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 핸드폰 번호 가리기
*/

string solution(string phone_number)
{
    string answer = "";

    for (int i = 0; i < phone_number.length() - 4; i++)
        answer += "*";
    answer += phone_number.substr(phone_number.length() - 4, 4);
    return answer;
}

int main()
{
    cout << solution("01033334444") << endl;
    cout << solution("027778888") << endl;
    cout << solution("4444") << endl;
    return 0;
}