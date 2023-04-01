#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 평균 구하기
*/

double solution(vector<int> arr)
{
    double answer = 0;

    for (int i : arr)
        answer += i;
    answer /= arr.size();
    return answer;
}

int main()
{
    cout << solution({1, 2, 3, 4}) << endl;
    cout << solution({5, 5}) << endl;
    return 0;
}