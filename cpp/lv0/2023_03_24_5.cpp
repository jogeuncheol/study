#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 한 번만 등장한 문자
*/

string solution(string s)
{
    string answer = "";

    vector<int> alphabet(26, 0);
    for (char c : s)
        alphabet.at(c - 'a')++;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet.at(i) == 1)
            answer += 'a' + i;
    }
    return answer;
}

int main()
{
    cout << solution("abcabcdac") << endl;
    cout << solution("abdc") << endl;
    cout << solution("hello") << endl;
    return 0;
}