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

    int max_idx = 0;
    for (int i = 0; i < sides.size(); i++)
    {
        if (sides.at(i) > sides.at(max_idx))
            max_idx = i;
    }
    answer = sides.at((max_idx + 1) % 3) + sides.at((max_idx + 2) % 3);
    if (answer > sides.at(max_idx))
        answer = 1;
    else
        answer = 2;
    return answer;
}

int main()
{
    cout << solution({1, 2, 3}) << endl;
    cout << solution({3, 6, 2}) << endl;
    cout << solution({199, 72, 222}) << endl;
    return 0;
}