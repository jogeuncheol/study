#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 카드 뭉치
*/

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    string answer = "";

    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < goal.size(); ++i)
    {
        if (goal[i] == cards1[c1])
            c1++;
        else if (goal[i] == cards2[c2])
            c2++;
        else
            break;
    }
    if (c1 + c2 == goal.size())
        answer += "Yes";
    else
        answer += "No";
    return answer;
}

int main()
{
    cout << solution({"i", "drink", "water"}, {"want", "to"}, {"i", "want", "to", "drink", "water"}) << endl;
    cout << solution({"i", "water", "drink"}, {"want", "to"}, {"i", "want", "to", "drink", "water"}) << endl;
    return 0;
}