#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 과일장수
*/

int solution(int k, int m, vector<int> score)
{
    int answer = 0;

    int max = 0;
    for (int s : score)
    {
        if (max < s)
            max = s;
    }

    vector<int> apple(max + 1, 0);
    for (int s : score)
        apple[s]++;

    int count = m;
    for (int i = apple.size() - 1; i > 0;)
    {
        if (apple[i]--)
        {
            if (--count == 0)
            {
                answer += (i * m);
                count = m;
            }
        }
        else
            i--;
    }
    return answer;
}

int main()
{
    cout << solution(4, 3, {4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2}) << endl;
    return 0;
}