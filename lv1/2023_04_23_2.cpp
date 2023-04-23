#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 키패드 누르기
 * 1 2 3    (0, 0) (0, 1) (0, 2)
 * 4 5 6    (1, 0) (1, 1) (1, 2)
 * 7 8 9    (2, 0) (2, 1) (2, 2)
 * * 0 #    (3, 0) (3, 1) (3, 2)
*/

string solution(vector<int> numbers, string hand)
{
    string answer = "";

    int l_hand[2] = {3, 0};
    int r_hand[2] = {3, 2};
    for (int num : numbers)
    {
        if (num == 0) num = 11;
        int n[2] = {(num - 1) / 3, (num - 1) % 3};
        if (n[1] == 0)
        {
            answer += "L";
            l_hand[0] = n[0];
            l_hand[1] = n[1];
        }
        else if (n[1] == 2)
        {
            answer += "R";
            r_hand[0] = n[0];
            r_hand[1] = n[1];
        }
        else
        {
            int dl = abs(n[0] - l_hand[0]) + abs(n[1] - l_hand[1]);
            int dr = abs(n[0] - r_hand[0]) + abs(n[1] - r_hand[1]);
            if (dl > dr)
            {
                answer += "R";
                r_hand[0] = n[0];
                r_hand[1] = n[1];
            }
            else if (dl < dr)
            {
                answer += "L";
                l_hand[0] = n[0];
                l_hand[1] = n[1];
            }
            else
            {
                if (hand[0] == 'r')
                {
                    answer += "R";
                    r_hand[0] = n[0];
                    r_hand[1] = n[1];
                }
                else
                {
                    answer += "L";
                    l_hand[0] = n[0];
                    l_hand[1] = n[1];
                }
            }
        }
    }
    return answer;
}

int main()
{
    cout << solution({1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5}, "right") << endl;
    return 0;
}