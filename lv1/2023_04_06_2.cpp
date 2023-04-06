#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 푸드 파이트 대회
*/

string solution(vector<int> food)
{
    string answer = "";

    answer += "0";
    for (int i = food.size() - 1; i > 0; --i)
    {
        for (int j = food[i] / 2; j > 0; --j)
        {
            answer.insert(answer.begin(), i + '0');
            answer.insert(answer.end(), i + '0');
        }
    }
    return answer;
}

int main()
{
    cout << solution({1, 3, 4, 6}) << endl;
    cout << solution({1, 7, 1, 2}) << endl;
    return 0;
}