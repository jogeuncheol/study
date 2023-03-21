#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 배열 회전시키기
*/

vector<int> solution(vector<int> numbers, string direction)
{
    vector<int> answer;

    int index = (direction[0] == 'r') ? 0 : 1;
    for (int i = index; i < index + (numbers.size() - 1); i++)
        answer.push_back(numbers.at(i));
    if (direction.at(0) == 'l')
        answer.insert(answer.end(), numbers.front());
    else
        answer.insert(answer.begin(), numbers.back());
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