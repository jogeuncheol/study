#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 두 정수 사이의 합
*/

long long solution(int a, int b)
{
    long long answer = 0;

    int M = max(a, b);
    int m = M == a ? b : a;
    for (; m <= M; m++)
        answer += m;
    return answer;
}

int main()
{
    cout << solution(3, 5) << endl;
    cout << solution(3, 3) << endl;
    cout << solution(5, 3) << endl;
    return 0;
}