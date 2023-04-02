#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 음양 더하기
*/

int solution(vector<int> absolutes, vector<bool> signs)
{
    int answer = 0;

    for (int i = 0; i < signs.size(); ++i)
    {
        if (signs.at(i))
            answer += absolutes.at(i);
        else
            answer -= absolutes.at(i);
    }
    return answer;
}

int main()
{
    cout << solution({4, 7, 12}, {true, false, true}) << endl;
    return 0;
}