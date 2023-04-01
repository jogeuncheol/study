#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 중복된 숫자 개수
*/

int solution(vector<int> array, int n)
{
    int answer = 0;

    for (int i : array)
    {
        if (i == n)
            answer++;
    }
    return answer;
}

int main()
{
    cout << solution({1, 2, 3, 1, 2, 4}, 1) << endl;
    cout << solution({1, 2, 3, 4}, 5) << endl;
    return 0;
}