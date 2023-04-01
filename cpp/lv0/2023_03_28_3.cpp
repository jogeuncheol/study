#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 외계어 사전
*/

int solution(vector<string> spell, vector<string> dic)
{
    int answer = 0;

    answer = 2;
    int len = spell.size();
    for (auto d : dic)
    {
        if (d.length() == len)
        {
            for (auto s : spell)
            {
                if (d.find(s) == string::npos)
                {
                    answer = 2;
                    break;
                }
                else
                    answer = 1;
            }
            if (answer == 1)
                break;
        }
    }
    return answer;
}

int main()
{
    cout << solution({"p", "o", "s"}, {"sod", "eocd", "qixm", "adio", "soo"}) << endl;
    cout << solution({"z", "d", "x"}, {"def", "dww", "dzx", "loveaw"}) << endl;
    cout << solution({"s", "o", "m", "d"}, {"moos", "dzx", "smm", "sunmmo", "som"}) << endl;
    return 0;
}