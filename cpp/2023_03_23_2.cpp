#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 배열 원소의 길이
*/

vector<int> solution(vector<string> strlist)
{
    vector<int> answer;

    for (string str : strlist)
        answer.push_back(str.length());
    return answer;
}

int main()
{
    vector<string> v = {"H", "EL", "LLO", " ", "WORLD"};
    for (int i : solution(v))
        cout << i << endl;
    return 0;
}