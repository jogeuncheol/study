#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 문자열안에 문자열
*/

int solution(string str1, string str2)
{
    int answer = 0;

    answer = 2;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1.at(i) == str2[0])
        {
            if (!str2.compare(str1.substr(i, str2.length())))
            {
                answer = 1;
                break;
            }
        }
    }
    /*
    if (str1.find(str2) == string::npos)
        answer = 2;
    else
        answer = 1;
    */
    return answer;
}

int main()
{
    cout << solution("ab6CDE443fgh22iJKlmn1o", "6CD") << endl;
    cout << solution("ppprrrogrammers", "pppp") << endl;
    cout << solution("AcdAcsA", "AAA") << endl;
    return 0;
}