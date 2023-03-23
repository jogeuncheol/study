#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 컨트롤 제트
*/

int solution(string s)
{
    int answer = 0;

    int num = 0;
    // split s
    vector<string> split_list;
    string split_str = "";
    for (char c : s)
    {
        if (c != ' ')
            split_str += c;
        else
        {
            split_list.push_back(split_str);
            split_str = "";
        }
    }
    split_list.push_back(split_str);
    // number
    for (auto sl : split_list)
    {
        if (sl != "Z")
        {
            num = atoi(sl.c_str());
            answer += num;
        }
        else
            answer -= num;
    }
    return answer;
}

int solution_2(string s)
{
    int answer = 0;

    int num = 0;
    bool flag = false;
    string::iterator iter = s.begin();
    for (; iter != s.end(); iter++)
    {
        if (*iter == '-')
                flag = true;
        else if (*iter != 'Z' && *iter != ' ')
        {
            num = 0;
            while (iter != s.end() && *iter != ' ')
            {
                num *= 10;
                num += *iter - '0';
                iter++;
            }
            if (flag)
                num *= -1;
            answer += num;
            if (iter == s.end())
                break;
        }
        else if (*iter == 'Z')
            answer -= num;
        else
            flag = false;
    }
    return answer;
}

int main()
{
    cout << solution("10 200 30 Z 40") << endl;
    cout << solution("1 2 Z 3") << endl;
    cout << solution("10 20 30 40") << endl;
    cout << solution("10 Z 20 Z 1") << endl;
    cout << solution("10 Z 20 Z") << endl;
    cout << solution("-1 -2 -3 Z") << endl;
    return 0;
}