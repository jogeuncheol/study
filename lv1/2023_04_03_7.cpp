#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 부족한 금액 계산하기
*/

long long solution(int price, int money, int count)
{
    long long answer = -1;

    long long p = price;
    long long c = count;
    answer = (c * (p + (p * c)) / 2) - money;
    answer = answer < 0 ? 0 : answer;
    return answer;
}

int main()
{
    cout << solution(3, 20, 4) << endl;
    return 0;
}