#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * [1차] 다트 게임
*/

int solution(string dartResult)
{
    int answer = 0;

    int round[3] = {0};
    int r = 0;
    for (int i = 0; i < dartResult.length(); ++i)
    {
        while (isdigit(dartResult[i]))
        {
            round[r] *= 10;
            round[r] += dartResult[i++] - '0';
        }
        if (dartResult[i] == 'D')
            round[r] *= round[r];
        else if (dartResult[i] == 'T')
            round[r] = round[r] * round[r] * round[r];
        else if (dartResult[i] == '*')
        {
            if (r == 0)
                round[r] *= 2;
            else
            {
                round[r] *= 2;
                round[r - 1] *= 2;
            }
        }
        else if (dartResult[i] == '#')
            round[r] *= -1;
        if (i != dartResult.length() - 1 && isdigit(dartResult[i + 1]))
            r++;
    }
    answer = round[0] + round[1] + round[2];
    return answer;
}

int main()
{
    cout << solution("1S2D*3T") << endl;
    cout << solution("1D2S#10S") << endl;
    cout << solution("1D2S0T") << endl;
    cout << solution("1S*2T*3S") << endl;
    cout << solution("1D#2S*3S") << endl;
    return 0;
}