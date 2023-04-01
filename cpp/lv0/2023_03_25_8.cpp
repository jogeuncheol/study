#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * OX퀴즈
*/

vector<string> solution(vector<string> quiz)
{
    vector<string> answer;

    vector<string> split;
    string split_str = "";
    for (string exp : quiz)
    {
        for (char c : exp)
        {
            if (c != ' ')
                split_str += c;
            else
            {
                split.push_back(split_str);
                split_str = "";
            }
        }
        split.push_back(split_str);
        split_str = "";
        if (!split[1].compare("+"))
            answer.push_back(stoi(split[0]) + stoi(split[2]) == stoi(split[4]) ? "O" : "X");
        else if (!split[1].compare("-"))
            answer.push_back(stoi(split[0]) - stoi(split[2]) == stoi(split[4]) ? "O" : "X");
        split.clear();
    }
    return answer;
}

int main()
{
    for (auto str : solution({"3 - 4 = -3", "5 + 6 = 11"}))
        cout << str << " ";
    cout << endl;
    for (auto str : solution({"19 - 6 = 13", "5 + 66 = 71", "5 - 15 = 63", "3 - 1 = 2"}))
        cout << str << " ";
    cout << endl;
    return 0;
}