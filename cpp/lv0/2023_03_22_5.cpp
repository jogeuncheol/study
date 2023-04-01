#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 모음 제거
*/

string solution(string my_string)
{
    string answer = "";

    for (char m_s : my_string)
    {
        if (m_s != 'a' && m_s != 'e' && m_s != 'i' && m_s != 'o' && m_s != 'u')
            answer.push_back(m_s);
    }
    return answer;
}

int main()
{
    cout << solution("bus") << endl;
    cout << solution("nice to meet you") << endl;
    cout << solution("a a a") << endl;
    return 0;
}