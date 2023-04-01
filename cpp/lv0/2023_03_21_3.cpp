#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 점의 위치 구하기
*/

int solution(vector<int> dot)
{
    int answer = 0;

    answer = (dot[0] > 0) ? ((dot[1] > 0) ? 1 : 4) : ((dot[1] > 0) ? 2 : 3);
    return answer;
}

int main()
{
    cout << solution({1, 2}) << endl;
    cout << solution({-1, 2}) << endl;
    cout << solution({-1, -2}) << endl;
    cout << solution({1, -2}) << endl;
    return 0;
}