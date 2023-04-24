#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 신규 아이디 추천
*/

string solution(string new_id)
{
    string answer = "";

    string check = "abcdefghijklmnopqrstuvwxyz0123456789-_.";
    for (int i = 0; i < new_id.length(); ++i)
    {
        if (new_id[i] == '.')
        {
            if (answer.back() != '.')
                answer += new_id[i];
        }
        else if (isupper(new_id[i]))
            answer += tolower(new_id[i]);
        else if (check.find(new_id[i]) != string::npos)
            answer += new_id[i];
    }
    if (answer[0] == '.')
        answer.erase(answer.begin());
    if (answer.back() == '.')
        answer.pop_back();
    if (answer.empty())
        answer += "a";
    while (answer.length() > 15)
        answer.pop_back();
    if (answer.back() == '.')
        answer.pop_back();
    while (answer.length() < 3)
        answer += answer.back();
    return answer;
}

int main()
{
    cout << solution("...!@BaT#*..y.abcdefghijklm") << endl;
    cout << solution("...!@BaT#*..y.abcdefghijklm...") << endl;
    cout << solution("=.=") << endl;
    cout << solution("abcdefghijklmn.p") << endl;
    cout << solution("+++") << endl;
    return 0;
}