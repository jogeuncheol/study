#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 가위 바위 보
*/

string solution(string rsp)
{
    string answer = "";

    for (auto c : rsp)
        answer.push_back(c == '0' ? '5' : (c == '2' ? '0' : '2'));
    return answer;
}

int main()
{
    cout << solution("205") << endl;
    return 0;
}