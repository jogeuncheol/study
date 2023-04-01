#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 중복된 문자 제거
*/

string solution(string my_string)
{
    string answer = "";

    for (int i = 0; i < my_string.length(); i++)
    {
        answer.push_back(my_string.at(i));
        for (int j = 0; j < i; j++)
        {
            if (answer.back() == my_string.at(j))
            {
                answer.pop_back();
                break;
            }
        }
    }
    return answer;
}

int main()
{
    cout << solution("hello world !!!") << endl;
    return 0;
}