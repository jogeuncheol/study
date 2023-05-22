#include <string>
#include <vector>
#include <iostream>

using namespace std;

/**
 * 바탕화면 정리
*/

vector<int> solution(vector<string> wallpaper)
{
    vector<int> answer;

    vector<int> x;
    vector<int> y;
    for (int i = 0; i < wallpaper.size(); ++i)
    {
        for (int j = 0; j < wallpaper[i].size(); ++j)
        {
            if (wallpaper[i][j] == '#')
            {
                x.emplace_back(j);
                y.emplace_back(i);
            }
        }
    }
    for (int i = 0; i < x.size() - 1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < x.size(); ++j)
        {
            if (x[min] > x[j])
                min = j;
        }
        if (min != i)
            swap(x[min], x[i]);
    }
    answer.emplace_back(y[0]);
    answer.emplace_back(x[0]);
    answer.emplace_back(y[y.size() - 1] + 1);
    answer.emplace_back(x[x.size() - 1] + 1);
    return answer;
}

int main()
{
    for (auto s : solution({".#...", "..#..", "...#."}))
        cout << s << " ";
    cout << endl;
    for (auto s : solution({"..........", ".....#....", "......##..", "...##.....", "....#....."}))
        cout << s << " ";
    cout << endl;
    for (auto s : solution({".##...##.", "#..#.#..#", "#...#...#", ".#.....#.", "..#...#..", "...#.#...", "....#...."}))
        cout << s << " ";
    cout << endl;
    for (auto s : solution({"..", "#."}))
        cout << s << " ";
    cout << endl;
    return 0;
}