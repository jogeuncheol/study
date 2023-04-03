#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 문자열 내림차순으로 배치하기
*/

string solution(string s)
{
    string answer = "";

    answer = s;
    for (int i = 0; i < answer.length() - 1; ++i)
    {
        int max = i;
        for (int j = i + 1; j < answer.length(); ++j)
        {
            if (answer[max] < answer[j])
                max = j;
        }
        if (max != i)
        {
            char tmp = answer[i];
            answer[i] = answer[max];
            answer[max] = tmp;
        }
    }
    return answer;
}

int main()
{
    cout << solution("Zbcdefg") << endl;
    return 0;
}