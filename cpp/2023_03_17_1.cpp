#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 피자 나눠 먹기 1
*/

int solution(int n)
{
    int answer = 0;

    answer = (n / 7) + ((n % 7) > 0);
    return answer;
}

int main()
{
    cout << solution(100) << endl;
    return 0;
}