#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * k의 개수
*/

int solution(int i, int j, int k)
{
    int answer = 0;

    for (; i <= j; ++i)
    {
        string n = to_string(i);
        for (int l = 0; l < n.length(); ++l)
        {
            if (n[l] - '0' == k)
                answer++;
        }
    }
    return answer;
}

int main()
{
    cout << solution(1, 13, 1) << endl;
    cout << solution(10, 50, 5) << endl;
    cout << solution(3, 10, 2) << endl;
    return 0;
}