#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 외계행성의 나이
*/

string solution(int age)
{
    string answer = "";

    string index_age = "abcdefghij";
    while (age)
    {
        answer.insert(0, index_age.substr(age % 10, 1));
        age = age / 10;
    }
    return answer;
}

int main()
{
    cout << solution(100) << endl;
    return 0;
}