#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 콜라츠 추측
*/

int solution(int num)
{
    int answer = 0;

    if (num != 1)
    {
        size_t n = num;
        for (; n != 1 && answer != 500;)
        {
            if (n % 2 == 0)
                n /= 2;
            else
                n = n * 3 + 1;
            answer++;
        }
        if (answer == 500)
            answer = -1;
    }
    return answer;
}

int main()
{
    cout << solution(1) << endl;
    cout << solution(6) << endl;
    cout << solution(16) << endl;
    cout << solution(626331) << endl;
    return 0;
}