#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 행렬의 덧셈
*/

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>> answer;

    for (int i = 0; i < arr1.size(); ++i)
    {
        vector<int> inner;
        for (int j = 0; j < arr1[i].size(); ++j)
            inner.emplace_back(arr1[i][j] + arr2[i][j]);
        answer.emplace_back(inner);
    }
    return answer;
}

int main()
{
    for (auto ii : solution({{1, 2}, {2, 3}}, {{3, 4}, {5, 6}}))
    {
        for (auto i : ii)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}