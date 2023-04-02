#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 정수 내림차순으로 배치하기
 * number count
 * 9, 8, 7 ... 3, 2, 1, 0
 * {0, 1, 1 ... 1, 1, 2, 0}
 * 873211
*/

long long solution(long long n)
{
    long long answer = 0;

    vector<int> num(10, 0);
    while (n)
    {
        num[n % 10]++;
        n /= 10;
    }
    for (int i = 9; i >= 0;)
    {
        if (num[i])
        {
            answer *= 10;
            answer += i;
            num[i]--;
            continue;
        }
        i--;
    }
    return answer;
}

int main()
{
    cout << solution(118372) << endl;
    cout << solution(1919191191977888) << endl;
    return 0;
}