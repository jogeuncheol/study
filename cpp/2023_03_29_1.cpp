#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 특이한 정렬
*/

vector<int> solution(vector<int> numlist, int n)
{
    vector<int> answer;

    vector<vector<int>> pair_list;
    vector<int> d_n(2, 0);
    bool need_sort = false;
    for (int num : numlist)
    {
        d_n[0] = abs(n - num);
        d_n[1] = num;
        pair_list.emplace_back(d_n);
    }
    for (int i = 0; i < pair_list.size() - 1; ++i)
    {
        if (pair_list[i][0] > pair_list[i + 1][0])
        {
            need_sort = true;
            break;
        }
    }
    if (need_sort)
    {
        for (int i = 0; i < pair_list.size() - 1; ++i)
        {
            int min = i;
            for (int j = i + 1; j < pair_list.size(); ++j)
            {
                if (pair_list[min][0] > pair_list[j][0])
                    min = j;
                else if (pair_list[min][0] == pair_list[j][0])
                {
                    if (pair_list[min][1] < pair_list[j][1])
                        min = j;
                }
            }
            if (min != i)
            {
                vector<int> tmp = pair_list[i];
                pair_list[i] = pair_list[min];
                pair_list[min] = tmp;
            }
        }
    }
    for (int i = 0; i < pair_list.size(); ++i)
        answer.emplace_back(pair_list[i][1]);
    return answer;
}

int main()
{
    for (int i : solution({1, 2, 3, 4, 5, 6}, 4))
        cout << i << " ";
    cout <<endl;
    for (int i : solution({10000,20,36,47,40,6,10,7000}, 30))
        cout << i << " ";
    cout <<endl;
    return 0;
}