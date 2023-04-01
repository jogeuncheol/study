#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 나머지가 1이 되는 수 찾기
*/

int solution(int n)
{
    int answer = 0;

    for (int i = 2; i < n; ++i)
    {
        if (n % i == 1)
        {
            answer = i;
            break;
        }
    }
    return answer;
}

int main()
{
    cout << solution(10) << endl;
    cout << solution(12) << endl;
    cout << solution(112) << endl;
    return 0;
}