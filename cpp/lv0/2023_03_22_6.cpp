#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 문자열 정렬하기 (1)
*/

vector<int> solution(string my_string)
{
    vector<int> answer;

    for (char str : my_string)
    {
        int num = str - '0';
        if (num >= 0 && num <= 9)
            answer.push_back(num);
    }
    for (int i = 0; i < answer.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < answer.size(); j++)
        {
            if (answer.at(min) > answer.at(j))
                min = j;
        }
        if (min == i)
            continue;
        int tmp = answer.at(i);
        answer.at(i) = answer.at(min);
        answer.at(min) = tmp;
    }
    return answer;
}

int main()
{
    for (auto s : solution("hi12392"))
        cout << s << ", ";
    cout << endl;
    for (auto s : solution("p2o4i8gj2"))
        cout << s << ", ";
    cout << endl;
    for (auto s : solution("abcde0"))
        cout << s << ", ";
    cout << endl;
    return 0;
}