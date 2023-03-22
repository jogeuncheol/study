#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 문자열 정렬하기 (1)
 * not use sort
 * number count
*/

vector<int> solution(string my_string)
{
    vector<int> answer;

    vector<int> number_count(10, 0);
    for (char str : my_string)
    {
        int num = str - '0';
        if (num >= 0 && num <= 9)
            number_count[num]++;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < number_count[i]; j++)
            answer.push_back(i);
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