#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 369게임
*/

int solution(int order)
{
    int answer = 0;

    while (order)
    {
        int m = order % 10;
        if (m == 3 || m == 6 || m == 9)
            answer++;
        order /= 10;
    }
    return answer;
}

int main()
{
    cout << solution(10) << endl;
    cout << solution(3) << endl;
    cout << solution(29423) << endl;
    cout << solution(33933) << endl;
    cout << solution(330933) << endl;
    return 0;
}