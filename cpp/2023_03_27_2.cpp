#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 캐릭터의 좌표
*/

vector<int> solution(vector<string> keyinput, vector<int> board)
{
    vector<int> answer;

    answer = {0, 0};
    for (auto k : keyinput)
    {
        if (k[0] == 'l')
            answer[0] = (answer[0] - 1) >= -(board[0] / 2) ? (answer[0] - 1) : answer[0];
        else if (k[0] == 'r')
            answer[0] = (answer[0] + 1) <= (board[0] / 2) ? (answer[0] + 1) : answer[0];
        else if (k[0] == 'u')
            answer[1] = (answer[1] + 1) <= (board[1] / 2) ? (answer[1] + 1) : answer[1];
        else
            answer[1] = (answer[1] - 1) >= -(board[1] / 2) ? (answer[1] - 1) : answer[1];
    }
    return answer;
}

int main()
{
    for (auto s : solution({"left", "right", "up", "right", "right"}, {11, 11}))
        cout << s << " ";
    cout << endl;

    for (auto s : solution({"down", "down", "down", "down", "down"}, {7, 9}))
        cout << s << " ";
    cout << endl;
    return 0;
}