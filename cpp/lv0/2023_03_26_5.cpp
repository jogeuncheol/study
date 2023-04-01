#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 7의 개수
*/

int solution(vector<int> array)
{
    int answer = 0;

    for (int n : array)
    {
        while (n)
        {
            if (n % 10 == 7)
                answer++;
            n /= 10;
        }
    }
    return answer;
}

int main()
{
    cout << solution({7, 77, 17}) << endl;
    cout << solution({10, 298}) << endl;
    return 0;
}