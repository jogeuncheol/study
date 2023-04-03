#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 없는 숫자 더하기
 * 0 <= n <= 9
 * 중복 X
*/

int solution(vector<int> numbers)
{
    int answer = 45;

    for (int n : numbers)
        answer -= n;
    return answer;
}

int main()
{
    cout << solution({1, 2, 3, 4, 6, 7, 8, 0}) << endl;
    cout << solution({5,8,4,0,6,7,9}) << endl;
    return 0;
}