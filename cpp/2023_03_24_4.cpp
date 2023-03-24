#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 인덱스 바꾸기
*/

string solution_(string my_string, int num1, int num2)
{
    string answer = "";

    answer = my_string;
    swap(answer.at(num1), answer.at(num2));
    return answer;
}

string solution(string my_string, int num1, int num2)
{
    string answer = "";

    answer = my_string;
    char c = my_string.at(num1);
    answer.at(num1) = answer.at(num2);
    answer.at(num2) = c;
    return answer;
}

int main()
{
    cout << solution("hello", 1, 2) << endl;
    cout << solution_("I love you", 3, 6) << endl;
    return 0;
}