#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 덧칠하기
*/

int solution(int n, int m, vector<int> section)
{
    int answer = 0;

    vector<int> wall(n + 1, 1);
    for (int s : section)
        wall[s] = 0;
    for (int i = section.front(); i <= n - m + 1; ++i)
    {
        int paint = 0;
        for (int j = i; j < i + m; ++j)
        {
            if (wall[j] == 0)
            {
                paint = 1;
                wall[j] = 1;
            }
        }
        if (paint)
            answer++;
    }
    return answer;
}

int main()
{
    cout << solution(8, 4, {2, 3, 6}) << endl;
    cout << solution(5, 4, {1, 3}) << endl;
    cout << solution(4, 1, {1, 2, 3, 4}) << endl;
    cout << solution(20, 4, {2, 3, 15, 16}) << endl;
    return 0;
}