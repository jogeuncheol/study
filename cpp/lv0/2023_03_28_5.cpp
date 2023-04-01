#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 평행
 * 점 네 개의 좌표
 * 두 직선이 평행 ? 1 : 0
 * |기울기| : dy dx
*/

int solution(vector<vector<int>> dots)
{
    int answer = 0;

    vector<double> d;
    for (int i = 0; i < dots.size() - 1; ++i)
    {
        for (int j = i + 1; j < dots.size(); ++j)
        {
            /**
             * 0 1 | 0 2 | 0 3
             * 1 2 | 1 3
             * 2 3
            */
            double dx = abs(dots[i][0] - dots[j % 4][0]);
            double dy = abs(dots[i][1] - dots[j % 4][1]);
            d.emplace_back(dy / dx);
        }
    }
    for (int i = 0; i < d.size() / 2; ++i)
    {
        if (d[i] == d[d.size() - 1 - i])
        {
            answer = 1;
            break;
        }
    }
    return answer;
}

int main()
{
    cout << solution({{1, 4}, {9, 2}, {3, 8}, {11, 6}}) << endl;
    cout << solution({{1, 4}, {3, 8}, {9, 2}, {11, 6}}) << endl;
    cout << solution({{1, 4}, {9, 2}, {11, 6}, {3, 8}}) << endl;
    cout << solution({{9, 2}, {1, 4}, {3, 8}, {11, 6}}) << endl;
    cout << solution({{3, 5}, {4, 1}, {2, 4}, {5, 10}}) << endl;
    cout << solution({{1, 2}, {2, 1}, {2, 4}, {4, 2}}) << endl;
    return 0;
}