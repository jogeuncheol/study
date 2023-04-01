#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 피자 나눠 먹기 2
*/

int solution(int n)
{
    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        if ((6 * i) % n)
            continue;
        answer = i;
        break;
    }
    return answer;
}

int main()
{
    cout << solution(91) << endl;
    return 0;
}