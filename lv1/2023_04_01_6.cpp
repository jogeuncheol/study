#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 문자열 내 p와 y의 개수
*/

bool solution(string s)
{
    bool answer = true;

    int p = 0;
    int y = 0;
    for (char c : s)
    {
        if (c == 'p' || c == 'P')
            p++;
        else if (c == 'y' || c == 'Y')
            y++;
    }
    answer = p == y ? true : false;
    return answer;
}

int main()
{
    return 0;
}