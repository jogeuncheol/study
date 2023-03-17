#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 옷가게 할인 받기
*/

int solution(int price)
{
    int answer = 0;

    if (price >= 500000)
        answer = price * 0.8;
    else if (price >= 300000)
        answer = price * 0.9;
    else if (price >= 100000)
        answer = price * 0.95;
    else
        answer = price;
    return answer;
}

int main()
{
    cout << solution(999990) << endl;
    return 0;
}