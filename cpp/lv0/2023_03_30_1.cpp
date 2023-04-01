#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 등수 매기기
 * 자신보다 큰 수의 수
*/

vector<int> solution(vector<vector<int>> score)
{
    vector<int> answer(score.size(), 1);

    for (int i = 0; i < score.size(); ++i)
    {
        for (int j = 0; j < score.size(); ++j)
        {
            if (score[i][0] + score[i][1] < score[j][0] + score[j][1])
                answer[i]++;
        }
    }
    return answer;
}

int main()
{
    for (auto i : solution({{80, 70}, {90, 50}, {40, 70}, {50, 80}}))
        cout << i << " ";
    cout << endl;

    for (auto i : solution({{80, 70}, {70, 80}, {30, 50}, {90, 100}, {100, 90}, {100, 100}, {10, 30}}))
        cout << i << " ";
    cout << endl;
    return 0;
}