#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 특정 문자 제거하기
*/

string solution(string my_string, string letter)
{
    string answer = "";

    /**
     * string::substr
     * char::at, [], auto str : my_string
    */
    for (int i = 0; i < my_string.length(); i++)
    {
        if (my_string.substr(i, 1) == letter)
            continue;
        answer.push_back(my_string.at(i));
    }
    return answer;
}

int main()
{
    string str = "hello";
    int idx = str.find('c', 0);
    cout << idx << endl;
    cout << solution("hello world !!!", "l") << endl;
    return 0;
}