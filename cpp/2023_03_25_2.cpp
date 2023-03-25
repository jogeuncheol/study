#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 가장 큰 수 찾기
*/

vector<int> solution(vector<int> array)
{
    vector<int> answer;

    answer.push_back(array.at(0));
    answer.push_back(0);
    for (int i = 1; i < array.size(); i++)
    {
        if (answer[0] < array.at(i))
        {
            answer[0] = array.at(i);
            answer[1] = i;
        }
    }
    return answer;
}

int main()
{
    for (auto s : solution({1, 7, 3}))
        cout << s << " ";
    cout << endl;
    return 0;
}