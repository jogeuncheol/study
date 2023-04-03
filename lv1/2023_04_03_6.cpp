#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 약수의 개수와 덧셈
*/

int solution(int left, int right)
{
    int answer = 0;

    for (int i = left; i <= right; ++i)
    {
        int count = 0;
        for (int j = 1; j <= i; ++j)
        {
            if (i % j == 0)
                count++;
        }
        if (count & 1)
            answer -= i;
        else
            answer += i;
    }
    return answer;
}

int main()
{
    cout << solution(13, 17) << endl;
    cout << solution(24, 27) << endl;
    return 0;
}