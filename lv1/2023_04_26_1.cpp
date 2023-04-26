#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 둘만의 암호
*/

string solution(string s, string skip, int index)
{
    string answer = "";

    string alphabet = "";
    for (int i = 0; i < 26; ++i)
    {
        if (skip.find('a' + i) == string::npos)
            alphabet += 'a' + i;
    }
    cout << alphabet << endl;
    for (char c : s)
    {
        int pos = alphabet.find(c);
        answer += alphabet[(pos + index) % alphabet.size()];
    }
    return answer;
}

int main()
{
    cout << solution("aukks", "wbqd", 5) << endl;
    return 0;
}