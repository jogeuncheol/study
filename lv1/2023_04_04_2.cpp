#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 같은 숫자는 싫어
 * 연속적으로 나타나는 숫자 제거
 * 원소들의 순서는 유지
*/

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    answer.emplace_back(arr[0]);
    int idx = 0;
    for (int i = 1; i < arr.size(); ++i)
    {
        if (answer[idx] == arr[i])
            continue;
        answer.emplace_back(arr[i]);
        idx++;
    }
    return answer;
}

int main()
{
    for (int i : solution({1, 1, 3, 3, 0, 1, 1}))
        cout << i << " ";
    cout << endl;
    for (int i : solution({4, 4, 4, 3, 3}))
        cout << i << " ";
    cout << endl;
    return 0;
}