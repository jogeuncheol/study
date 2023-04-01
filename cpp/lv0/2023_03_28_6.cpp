#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 겹치는 선분의 길이
*/

int solution(vector<vector<int>> lines)
{
    int answer = 0;

    int min = lines[0][0];
    int max = lines[0][1];
    for (int i = 0; i < lines.size(); i++)
    {
        if (min > lines[i][0])
            min = lines[i][0];
        if (max < lines[i][1])
            max = lines[i][1];
    }
    if (min < 0)
    {
        for (vector<int>& line : lines)
        {
            for (int& l : line)
                l -= min;
        }
    }
    vector<int> e(201, 0);
    for (vector<int> line : lines)
    {
        for (int i = line[0]; i < line[1]; i++)
            e[i]++;
    }
    for (int i : e)
    {
        if (i >= 2)
            answer++;
    }
    return answer;
}

int main()
{
    cout << solution({{0, 1}, {2, 5}, {3, 9}}) << endl;
    cout << solution({{-1, 1}, {1, 3}, {3, 9}}) << endl;
    cout << solution({{0, 5}, {3, 9}, {1, 10}}) << endl;
    cout << solution({{0, 2}, {-3, -1}, {-2, 1}}) << endl;
    cout << solution({{-100, 0}, {0, 10}, {20, 100}}) << endl;
    cout << solution({{-100, -10}, {-20, 10}, {-100, 100}}) << endl;
    cout << solution({{0, 1}, {1, 2}, {2, 3}}) << endl;
    cout << solution({{0, 2}, {1, 10}, {0, 1}}) << endl;
    cout << solution({{0, 6}, {0, 6}, {2, 4}}) << endl;
    cout << solution({{0, 8}, {0, 2}, {6, 8}}) << endl;
    cout << solution({{-100, -99}, {0, 1}, {2, 10}}) << endl;
    cout << solution({{-100, -98}, {98, 100}, {-99, 99}}) << endl;
    cout << solution({{-3, 0}, {-99, 10}, {0, 1}}) << endl;
    cout << solution({{97, 100}, {98, 99}, {97, 100}}) << endl;
    return 0;
}