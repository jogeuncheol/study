#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 옹알이 (2)
*/

int solution(vector<string> babbling)
{
    int answer = 0;

    vector<string> p = {"aya", "ye", "woo", "ma"};
    for (string b : babbling)
    {
        int idx = 0;
        int len = b.length();
        for (int i = 0; i < 4; ++i)
        {
            int b_idx = b.find(p[i]);
            while (b_idx != string::npos)
            {
                b.replace(b_idx, p[i].length(), to_string(i));
                idx += p[i].length();
                b_idx = b.find(p[i]);
            }
        }
        if (len == idx)
        {
            answer++;
            for (int i = 0; i < b.length() - 1; ++i)
            {
                if (b[i] == b[i + 1])
                {
                    answer--;
                    break;
                }
            }
        }
    }
    return answer;
}

int main()
{
    string s = "hello";
    cout << s.find("hel") << endl;
    cout << s.find("ell") << endl;
    cout << solution({"aya", "yee", "u", "maa"}) << endl;
    cout << solution({"ayaye", "uuu", "yeye", "yemawoo", "ayaayaa"}) << endl;
    cout << solution({"ayaye", "uuu", "yeye", "yemawoo", "ayamaaya"}) << endl;
    cout << solution({"ayaye", "uuu", "yeye", "yemawoo", "ayaayama"}) << endl;
    return 0;
}