#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 옹알이 (1)
 * aya, ye, woo, ma
*/

int solution(vector<string> babbling)
{
    int answer = 0;
    
    vector<string> pronunciation = {"aya", "ye", "woo", "ma"};
    for (string b : babbling)
    {
        int len = 0;
        for (int i = 0; i < 4; ++i)
        {
            if (b.find(pronunciation[i]) != string::npos)
                len += pronunciation[i].length();
        }
        if (b.length() == len)
            answer++;
    }
    return answer;
}

int main()
{
    cout << solution({"aya", "yee", "u", "maa", "wyeoo"}) << endl;
    cout << solution({"ayaye", "uuuma", "ye", "yemawoo", "ayaa"}) << endl;
    return 0;
}