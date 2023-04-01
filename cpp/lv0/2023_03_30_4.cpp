#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 치킨 쿠폰
*/

int solution(int chicken)
{
    int answer = 0;

    int coupon = 0;
    while (chicken)
    {
        answer += chicken / 10;
        coupon += chicken % 10;
        chicken /= 10;
    }
    while (coupon >= 10)
    {
        answer += coupon / 10;
        coupon = (coupon / 10) + (coupon % 10);
    }
    return answer;
}

int main()
{
    cout << solution(100) << endl;
    cout << solution(1081) << endl;
    cout << solution(10) << endl;
    cout << solution(9) << endl;
    cout << solution(11) << endl;
    cout << solution(1999) << endl;
    return 0;
}