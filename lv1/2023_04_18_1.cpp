#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 기사단원의 무기
*/

int solution(int number, int limit, int power)
{
    int answer = 0;

    vector<int> d(number + 1, 0);
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= (number / i); j++)
            d[i * j]++;
        if (d[i] > limit)
            d[i] = power;
    }
    for (int i : d)
        cout << i << " ";
    cout << endl;
    for (int i : d)
        answer += i;
    return answer;
}

int main()
{
    cout << solution(5, 3, 2) << endl;
    cout << solution(6, 3, 2) << endl;
    cout << solution(10, 3, 2) << endl;
    return 0;
}