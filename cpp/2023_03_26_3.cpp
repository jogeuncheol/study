#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 세균 증식
*/

int solution(int n, int t)
{
    int answer = 0;

    answer = n;
    for (int i = 0; i < t; i++)
        answer *= 2;
    return answer;
}

int main()
{
    cout << solution(2, 10) << endl;
    cout << solution(7, 15) << endl;
    return 0;
}