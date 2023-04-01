#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 합성수 찾기
*/

int solution(int n)
{
    int answer = 0;

    vector<int> count(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n / i; j++)
            count[i * j]++;
    }
    for (auto c : count)
    {
        if (c >= 3)
            answer++;
    }
    return answer;
}

int main()
{
    for (int i = 0; i <= 100; i++)
        cout << solution(i) << endl;
    return 0;
}