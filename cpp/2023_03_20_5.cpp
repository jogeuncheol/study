#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 개미 군단
*/

int solution(int hp)
{
    int answer = 0;

    answer += hp / 5;
    hp %= 5;
    answer += hp / 3;
    hp %= 3;
    answer += hp;
    return answer;
}

int main()
{
    cout << solution(23) << endl;
    return 0;
}