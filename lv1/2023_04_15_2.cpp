#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 로또의 최고 순위와 최저 순위
*/

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    vector<int> answer;

    int zero = 0;
    int r = 0;
    for (int i = 0; i < lottos.size(); ++i)
    {
        if (lottos[i] == 0)
            zero++;
        for (int j = 0; j < win_nums.size(); ++j)
        {
            if (lottos[i] == win_nums[j])
                r++;
        }
    }
    answer.emplace_back(7 - (zero + r));
    answer.emplace_back(7 - r);
    if (answer[0] > 5)
        answer[0] = 6;
    if (answer[1] > 5)
        answer[1] = 6;
    return answer;
}

int main()
{
    for (int s : solution({44, 1, 0, 0, 31, 25}, {31, 10, 45, 1, 6, 19}))
        cout << s << " ";
    cout << endl;
    for (int s : solution({0, 0, 0, 0, 0, 0}, {20, 9, 3, 45, 4, 35}))
        cout << s << " ";
    cout << endl;
    for (int s : solution({45, 4, 35, 20, 3, 9}, {20, 9, 3, 45, 4, 35}))
        cout << s << " ";
    cout << endl;
    for (int s : solution({1, 2, 3, 4, 5, 6}, {20, 9, 7, 45, 8, 35}))
        cout << s << " ";
    cout << endl;
    return 0;
}