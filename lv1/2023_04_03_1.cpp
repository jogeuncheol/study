#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 제일 작은 수 제거하기
*/

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    answer = arr;
    int min = 0;
    for (int i = 0; i < answer.size(); ++i)
    {
        if (answer[min] > answer[i])
            min = i;
    }
    answer.erase(answer.begin() + min);
    if (answer.empty())
        answer.emplace_back(-1);
    return answer;
}

int main()
{
    for (auto i : solution({4, 3, 2, 1}))
        cout << i << " ";
    cout << endl;
    return 0;
}