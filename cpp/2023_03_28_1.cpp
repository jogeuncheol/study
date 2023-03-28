#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 안전지대
 * filter, convolution, mask
*/

int solution(vector<vector<int>> board)
{
    int answer = 0;

    vector<vector<int>> mine = board;
    int n = board[0].size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (board[i][j] == 1)
            {
                for (int k = -1; k <= 1; ++k)
                {
                    for (int l = -1; l <= 1; ++l)
                    {
                        if (i + k >= 0 && i + k < n && j + l >= 0 && j + l < n)
                            mine[i + k][j + l] = 1;
                    }
                }
            }
        }
    }
    for (auto mm : mine)
    {
        for (auto m : mm)
        {
            if (m == 0)
                answer++;
        }
    }
    return answer;
}

int main()
{
    cout << solution({{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0}}) << endl;
    cout << solution({{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 0, 0}}) << endl;
    cout << solution({{1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {0, 0, 0, 0, 0}}) << endl;
    return 0;
}