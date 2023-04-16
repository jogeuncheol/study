#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 덧칠하기
*/

int solution(int n, int m, vector<int> section)
{
    int answer = 0;

    for (int i = 0; i < section.size();)
    {
        int p = section[i];
        for (int j = i; j < section.size(); ++j)
        {
            if (section[i] - p < m)
                i++;
            else
                break;
        }
        answer++;
    }
    return answer;
}

int main()
{
    cout << solution(8, 4, {2, 3, 6}) << endl;
    cout << solution(5, 4, {1, 3}) << endl;
    cout << solution(4, 1, {1, 2, 3, 4}) << endl;
    cout << solution(20, 4, {2, 3, 15, 16}) << endl;
    return 0;
}