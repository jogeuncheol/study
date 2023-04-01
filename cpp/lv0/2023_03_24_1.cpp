#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 암호 해독
 * code의 배수 번째 글자
*/

string solution(string cipher, int code)
{
    string answer = "";

    for (int i = 1; i <= cipher.length() / code; i++)
        answer += cipher.at((i * code) - 1);
    return answer;
}

int main()
{
    cout << solution("dfjardstddetckdaccccdegk", 4) << endl;
    cout << solution("pfqallllabwaoclk", 2) << endl;
    return 0;
}