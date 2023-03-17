#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 피자 나눠 먹기 3
*/

int solution(int slice, int n)
{
    int answer = 0;

    answer = (n / slice) + ((n % slice) > 0);
    return answer;
}

int main()
{
    cout << solution(4, 12) << endl;
    return 0;
}