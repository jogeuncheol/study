#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 콜라 문제
*/

int solution(int a, int b, int n)
{
    int answer = 0;

    while (n >= a)
    {
        n = n - a + b;
        cout << n << endl;
        answer++;
    }
    answer *= b;
    return answer;
}

int main()
{
    // cout << solution(2, 1, 20) << endl;
    // cout << solution(3, 1, 20) << endl;
    cout << solution(3, 2, 20) << endl;
    return 0;
}