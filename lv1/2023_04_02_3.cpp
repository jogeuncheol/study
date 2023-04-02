#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 하샤드 수
 * n % n.자릿수 합 == 0 ? true : false
*/

bool solution(int x)
{
    bool answer = true;

    int a = x;
    int sum = 0;
    while (a)
    {
        sum += a % 10;
        a /= 10;
    }
    answer = (x % sum == 0) ? true : false;
    return answer;
}

int main()
{
    cout << solution(18) << endl;
    cout << solution(12) << endl;
    cout << solution(13) << endl;
    return 0;
}