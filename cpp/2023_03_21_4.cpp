#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 2차원으로 만들기
 * num_list : 1차 정수 배열
 * n개씩
*/

vector<vector<int>> solution(vector<int> num_list, int n)
{
    vector<vector<int>> answer;

    vector<int> pair;
    for (int i = 0; i < num_list.size() / n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            pair.push_back(num_list.at((i * n) + j));
        }
        answer.push_back(pair);
        pair.clear();
    }
    return answer;
}

int main()
{
    for (auto vv : solution({100, 95, 2, 4, 5, 6, 18, 33, 948}, 3))
    {
        for (auto v : vv)
            cout << v << " ";
        cout << endl;
    }
    return 0;
}