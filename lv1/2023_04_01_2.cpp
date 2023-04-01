#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 약수의 합
 * 0 < n < 3000
*/

int solution(int n)
{
    int answer = 0;

    for (int i = 1; i <= n; ++i)
        answer += n % i == 0 ? i : 0;
    return answer;
}

int main()
{
    cout << solution(12) << endl;
    cout << solution(5) << endl;
    return 0;
}