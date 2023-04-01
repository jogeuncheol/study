#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 양꼬치
 * 양꼬치 10인분에 음료수 하나 서비스
 * 양꼬치 1인분 : 12,000
 * 음료수 1개   : 2,000
 * 양꼬치 n인분과 음료수 k개를 먹었다면 얼마?
*/

int solution(int n, int k)
{
    int answer = 0;

    answer = (12000 * n) + 2000 * (k - (n / 10));
    return answer;
}

int main()
{
    cout << solution(64, 6) << endl;
    return 0;
}