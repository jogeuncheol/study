#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 삼각형의 완성조건 (1)
*/

int solution(vector<int> sides)
{
    int answer = 0;

    int max = 0;
    for (int i = 0; i < sides.size(); i++)
    {
        if (sides.at(i) > max)
            max = sides.at(i);
        answer += sides.at(i);
    }
    answer = (max < answer - max) ? 1 : 2;
    return answer;
}

int main()
{
    cout << solution({1, 2, 3}) << endl;
    cout << solution({3, 6, 2}) << endl;
    cout << solution({199, 72, 222}) << endl;
    return 0;
}