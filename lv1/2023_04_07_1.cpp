#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 소수 찾기
*/

int solution(int n)
{
    int answer = 0;

    vector<int> e(n + 1, 0);
    for (int i = 2; i * i <= n; ++i)
    {
        if (e[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
                e[j] = 1;
        }
    }
    for (int i = 2; i <= n; ++i)
    {
        if (e[i] == 0)
            answer++;
    }
    return answer;
}

int main()
{
    cout << solution(5) << endl;
    cout << solution(10) << endl;
    cout << solution(120) << endl;
    return 0;
}