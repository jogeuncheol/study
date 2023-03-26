#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 머쓱이보다 키 큰 사람
*/

int solution(vector<int> array, int height)
{
    int answer = 0;

    for (int i : array)
    {
        if (i > height)
            answer++;
    }
    return answer;
}

int main()
{
    cout << solution({149, 180, 192, 170}, 167) << endl;
    cout << solution({180, 120, 140}, 190) << endl;
    return 0;
}