#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 삼각형의 완성조건 (2)
*/

int solution(vector<int> sides)
{
    int answer = 0;

    // 1. long in sides
    int longer = max(sides[0], sides[1]);
    int e = min(sides[0], sides[1]);
    answer += e;
    // 2. other is long
    for (int other = longer + 1; other < longer + e; ++other)
        answer++;
    return answer;
}

int main()
{
    cout << solution({1, 2}) << endl;
    cout << solution({3, 6}) << endl;
    cout << solution({11, 7}) << endl;
    cout << solution({11, 1}) << endl;
    return 0;
}