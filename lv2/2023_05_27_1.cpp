#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * lv2
 * 최솟값 만들기
*/

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i = 0; i < A.size(); ++i)
        answer += (A[i] * B[B.size() - 1 - i]);
    return answer;
}

int main()
{
    cout << solution({1, 4, 2}, {5, 4, 4}) << endl;
    cout << solution({1, 2}, {3, 4}) << endl;
    return 0;
}