#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 문자열 계산하기
*/

int solution(string my_string)
{
    int answer = 0;

    vector<string> str_list;
    string split_str = "";
    for (char c : my_string)
    {
        if (c != ' ')
            split_str += c;
        else
        {
            str_list.push_back(split_str);
            split_str = "";
        }
    }
    str_list.push_back(split_str);
    answer += stoi(str_list[0]);
    for (int i = 1; i < str_list.size() - 1; i++)
    {
        if (!str_list.at(i).compare("+"))
            answer += stoi(str_list.at(i + 1));
        else if (!str_list.at(i).compare("-"))
            answer -= stoi(str_list.at(i + 1));
    }
    return answer;
}

int main()
{
    cout << solution("3 + 4") << endl;
    return 0;
}