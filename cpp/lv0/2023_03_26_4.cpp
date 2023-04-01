#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string)
{
    string answer = "";

    for (auto c : my_string)
    {
        if (isupper(c))
            answer += tolower(c);
        else
            answer += c;
    }
    for (int i = 0; i < answer.length() - 1; i++)
    {
        for (int j = i + 1; j < answer.length(); j++)
        {
            if (answer.at(i) > answer.at(j))
            {
                char c = answer.at(i);
                answer.at(i) = answer.at(j);
                answer.at(j) = c;
            }
        }
    }
    return answer;
}

int main()
{
    cout << solution("Bcad") << endl;
    cout << solution("heLLo") << endl;
    cout << solution("Python") << endl;
    return 0;
}