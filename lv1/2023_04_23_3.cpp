#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 크레인 인형뽑기 게임
*/

int solution(vector<vector<int>> board, vector<int> moves)
{
    int answer = 0;

    vector<int> stack;
    for (int i : moves)
    {
        for (vector<int> &b : board)
        {
            if (b[i - 1])
            {
                stack.emplace_back(b[i - 1]);
                b[i - 1] = 0;
                break;
            }
        }
        if (stack.size() > 1)
        {
            if (*(stack.end() - 1) == *(stack.end() - 2))
            {
                answer += 2;
                stack.pop_back();
                stack.pop_back();
            }
        }
    }
    return answer;
}

int main()
{
    cout << solution({{0, 0, 0, 0, 0}, {0,0,1,0,3}, {0,2,5,0,1}, {4,2,4,4,2}, {3,5,1,3,1}}, {1,5,3,5,1,2,1,4}) << endl;
    return 0;
}