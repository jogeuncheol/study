#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 문자 반복 출력하기
*/

string solution(string my_string, int n)
{
    string answer = "";

    for (int i = 0; i < my_string.length(); i++)
        answer += string(n, my_string.at(i));
    return answer;
}

int main()
{
    cout << solution("Hello World !!!", 3);
    return 0;
}