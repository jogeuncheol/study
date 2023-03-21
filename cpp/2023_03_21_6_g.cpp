#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 배열 회전시키기
 * good solution
*/

vector<int> solution(vector<int> numbers, string direction)
{
    vector<int> answer;

    int index = (direction[0] == 'r') ? numbers.size() - 1 : 1;
    for (int i = 0; i < numbers.size(); i++)
    {
        answer.push_back(numbers.at(index++));
        index %= numbers.size();
    }
    return answer;
}

int main()
{
    for (auto s : solution({1, 2, 3}, "right"))
        cout << s << " ";
    cout <<endl;
    for (auto s : solution({4, 455, 6, 4, -1, 45, 6}, "left"))
        cout << s << " ";
    cout <<endl;
    return 0;
}