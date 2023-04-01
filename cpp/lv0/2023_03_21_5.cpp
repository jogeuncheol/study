#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 공 던지기
 * 하나 건너 던진다.
 * 1, 2, 3 -> (1)-(3)-(2)-(1)-(3) ...
*/

int solution(vector<int> numbers, int k)
{
    int answer = 0;

    int index = 0;
    int count = numbers.size();
    // 0 ~ numbers.size() - 1
    int mod = k % numbers.size();
    if (mod == 0)
        mod += k;
    for (int i = 1; i < mod; i++)
    {
        index += 2;
        if (index >= count)
            index -= count;
    }
    answer = numbers.at(index);
    return answer;
}

int main()
{
    cout << solution({1, 2, 3}, 1) << endl;
    return 0;
}