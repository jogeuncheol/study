#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 문자열 뒤집기
*/

string solution(string my_string)
{
    string answer = "";

    for (int i = my_string.length() - 1; i >= 0; i--)
    {
        answer.push_back(my_string.at(i));
    }

    /**
     * insert & substr
    */
    for (int i = 0; i < my_string.length(); i++)
    {
        answer.insert(0, my_string.substr(i, 1));
    }
    return answer;
}

int main()
{
    cout << solution("Hello World !!!") << endl;
    return 0;
}