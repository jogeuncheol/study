#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 직사각형 넓이 구하기
*/

int solution(vector<vector<int>> dots)
{
    int answer = 0;

    if (dots[0][0] == dots[1][0])
        answer = (dots[0][1] - dots[1][1]) * (dots[0][0] - dots[3][0]);
    else if (dots[0][0] == dots[2][0])
        answer = (dots[0][1] - dots[2][1]) * (dots[0][0] - dots[1][0]);
    else if (dots[0][0] == dots[3][0])
        answer = (dots[0][1] - dots[3][1]) * (dots[0][0] - dots[2][0]);
    if (answer < 0)
        answer *= -1;
    return answer;
}

int main()
{
    cout << solution({{1, 1}, {2, 1}, {2, 2}, {1, 2}}) << endl;
    cout << solution({{-1, -1}, {1, 1}, {1, -1}, {-1, 1}}) << endl;
    cout << solution({{1, 1}, {3, 1}, {3, 3}, {1, 3}}) << endl;
    cout << solution({{-1, 0}, {3, 8}, {-1, 8}, {3, 0}}) << endl;
    return 0;
}