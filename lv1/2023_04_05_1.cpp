#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 삼총사
*/

int solution(vector<int> number)
{
    int answer = 0;

    for (int i = 0; i < number.size() - 2; ++i)
    {
        for (int j = i + 1; j < number.size() - 1; ++j)
        {
            for (int k = j + 1; k < number.size(); ++k)
            {
                if (number[i] + number[j] + number[k] == 0)
                    answer++;
            }
        }
    }
    return answer;
}

int main()
{
    cout << solution({-2, 3, 0, 2, -5}) << endl;
    cout << solution({-3, -2, -1, 0, 1, 2, 3}) << endl;
    cout << solution({-1, 1, -1, 1}) << endl;
    return 0;
}