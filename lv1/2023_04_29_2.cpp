#include <iostream>
#include <string>
#include <vector>

/**
 * 햄버거 만들기
 * 1 2 3 1 == 빵 야채 고기 빵
*/

using namespace std;

int solution (vector<int> ingredient)
{
    int answer = 0;

    vector<int> index;
    for (int i = 0; i < (int)ingredient.size() - 3; i++)
    {
        if (ingredient[i] == 1)
            index.emplace_back(i);
        if (ingredient[i] == 1 && ingredient[i + 1] == 2 && ingredient[i + 2] == 3 && ingredient[i + 3] == 1)
        {
            index.pop_back();
            answer++;
            ingredient.erase(ingredient.begin() + i, ingredient.begin() + i + 4);
            if (!index.empty())
            {
                i = index.back() - 1;
                index.pop_back();
            }
            else
                i = -1;
        }
    }
    return answer;
}

int main()
{
    cout << solution({2, 1, 1, 2, 3, 1, 2, 3, 1}) << endl;
    cout << solution({1, 3, 2, 1, 2, 1, 3, 1, 2}) << endl;
    cout << solution({1, 2, 3, 1}) << endl;
    cout << solution({1, 1, 1, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1}) << endl;
    cout << solution({1, 1, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 1, 2, 3, 1}) << endl;
    return 0;
}